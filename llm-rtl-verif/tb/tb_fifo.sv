`timescale 1ns/1ps
module tb_fifo #(parameter int BUG = 0, parameter int WIDTH = 8, parameter int DEPTH = 8);
  logic clk = 0, rst_n = 1, wr_en = 0, rd_en = 0;
  logic [WIDTH-1:0] wdata = '0, rdata;
  logic full, empty;
  logic [$clog2(DEPTH):0] count;

  fifo #(.WIDTH(WIDTH), .DEPTH(DEPTH), .BUG(BUG)) dut (.*);
  fifo_props_golden #(.WIDTH(WIDTH), .DEPTH(DEPTH)) u_gold (.*);
  fifo_props_gen    #(.WIDTH(WIDTH), .DEPTH(DEPTH)) u_gen  (.*);

  always #5 clk = ~clk;

  // ---- scoreboard ----
  logic [WIDTH-1:0] model[$];
  int errors = 0;
  bit chk_pending = 0;
  logic [WIDTH-1:0] chk_exp;

  always @(negedge rst_n) begin model.delete(); chk_pending = 0; end

  always @(posedge clk) if (rst_n) begin
    bit mw, mr;
    mw = wr_en && (model.size() < DEPTH);
    mr = rd_en && (model.size() > 0);
    chk_pending = mr;
    if (mr) chk_exp = model.pop_front();
    if (mw) model.push_back(wdata);
  end

  always @(negedge clk) if (rst_n) begin
    if (chk_pending) begin
      if (rdata !== chk_exp) begin
        errors++; $display("TB_ERR data exp=%0h got=%0h t=%0t", chk_exp, rdata, $time);
      end
      chk_pending = 0;
    end
    if (full  !== (model.size() == DEPTH)) begin errors++; $display("TB_ERR full t=%0t",  $time); end
    if (empty !== (model.size() == 0))     begin errors++; $display("TB_ERR empty t=%0t", $time); end
  end

  // ---- stimulus ----
  task automatic drive(input bit w, input bit r, input logic [WIDTH-1:0] d);
    @(negedge clk); wr_en = w; rd_en = r; wdata = d;
  endtask

  initial begin
    string stim_file;
    int fd, w, r, code, wp;
    logic [WIDTH-1:0] d;

    #1 rst_n = 0;
    repeat (3) @(negedge clk);
    rst_n = 1;

    repeat (DEPTH+3) drive(1, 0, $urandom);   // fill + overfill
    repeat (DEPTH+3) drive(0, 1, '0);         // drain + underflow
    repeat (4)       drive(1, 1, $urandom);   // rd+wr when empty
    repeat (DEPTH)   drive(1, 0, $urandom);   // fill
    repeat (4)       drive(1, 1, $urandom);   // rd+wr when full
    repeat (DEPTH+2) drive(0, 1, '0);

    for (int ph = 0; ph < 10; ph++) begin     // write-heavy / read-heavy phases
      wp = (ph % 2 == 0) ? 75 : 25;
      repeat (200) drive($urandom_range(99) < wp, $urandom_range(99) < (100 - wp), $urandom);
    end

    if ($value$plusargs("STIM=%s", stim_file)) begin   // LLM-proposed extra tests
      fd = $fopen(stim_file, "r");
      if (fd != 0) begin
        while (!$feof(fd)) begin
          code = $fscanf(fd, "%d %d %h\n", w, r, d);
          if (code == 3) drive(w[0], r[0], d);
        end
        $fclose(fd);
      end
    end

    drive(0, 0, '0); drive(0, 0, '0);
    $display("TB_DONE errors=%0d", errors);
    $finish;
  end
endmodule
