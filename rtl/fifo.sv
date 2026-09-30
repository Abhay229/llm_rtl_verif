`timescale 1ns/1ps
// BUG: 1 write accepted when full | 2 read accepted when empty
//      3 full flag one entry early | 4 simultaneous rd+wr miscounts
module fifo #(parameter int WIDTH = 8, parameter int DEPTH = 8, parameter int BUG = 0) (
  input  logic                   clk, rst_n, wr_en, rd_en,
  input  logic [WIDTH-1:0]       wdata,
  output logic [WIDTH-1:0]       rdata,
  output logic                   full, empty,
  output logic [$clog2(DEPTH):0] count
);
  localparam int AW = $clog2(DEPTH);
  logic [WIDTH-1:0] mem [DEPTH];
  logic [AW-1:0]    wptr, rptr;

  assign full  = (BUG == 3) ? (count >= DEPTH - 1) : (count == DEPTH);
  assign empty = (count == 0);
  wire do_wr = (BUG == 1) ? wr_en : (wr_en && !full);
  wire do_rd = (BUG == 2) ? rd_en : (rd_en && !empty);

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      wptr <= '0; rptr <= '0; count <= '0; rdata <= '0;
    end else begin
      if (do_wr) begin
        mem[wptr] <= wdata;
        wptr <= (wptr == DEPTH-1) ? '0 : wptr + 1'b1;
      end
      if (do_rd) begin
        rdata <= mem[rptr];
        rptr <= (rptr == DEPTH-1) ? '0 : rptr + 1'b1;
      end
      case ({do_wr, do_rd})
        2'b10:   count <= count + 1'b1;
        2'b01:   count <= count - 1'b1;
        2'b11:   count <= (BUG == 4) ? count + 1'b1 : count;
        default: ;
      endcase
    end
  end
endmodule
