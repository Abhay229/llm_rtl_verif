`timescale 1ns/1ps
// Hand-written baseline properties (the "golden" set).
module fifo_props_golden #(parameter int WIDTH = 8, parameter int DEPTH = 8) (
  input logic clk, rst_n, wr_en, rd_en,
  input logic [WIDTH-1:0] wdata, rdata,
  input logic full, empty,
  input logic [$clog2(DEPTH):0] count
);
  g_count_bounded: assert property (@(posedge clk) disable iff (!rst_n) count <= DEPTH)
    else $display("ASSERT_FAIL GOLD:g_count_bounded t=%0t", $time);
  g_full_def: assert property (@(posedge clk) disable iff (!rst_n) full == (count == DEPTH))
    else $display("ASSERT_FAIL GOLD:g_full_def t=%0t", $time);
  g_empty_def: assert property (@(posedge clk) disable iff (!rst_n) empty == (count == 0))
    else $display("ASSERT_FAIL GOLD:g_empty_def t=%0t", $time);
  g_not_full_and_empty: assert property (@(posedge clk) disable iff (!rst_n) !(full && empty))
    else $display("ASSERT_FAIL GOLD:g_not_full_and_empty t=%0t", $time);
  g_no_write_when_full: assert property (@(posedge clk) disable iff (!rst_n)
      (full && wr_en && !rd_en) |=> (count == $past(count)))
    else $display("ASSERT_FAIL GOLD:g_no_write_when_full t=%0t", $time);
  g_no_read_when_empty: assert property (@(posedge clk) disable iff (!rst_n)
      (empty && rd_en && !wr_en) |=> (count == $past(count)))
    else $display("ASSERT_FAIL GOLD:g_no_read_when_empty t=%0t", $time);
  g_write_incr: assert property (@(posedge clk) disable iff (!rst_n)
      (wr_en && !full && !rd_en) |=> (count == $past(count) + 1))
    else $display("ASSERT_FAIL GOLD:g_write_incr t=%0t", $time);
  g_read_decr: assert property (@(posedge clk) disable iff (!rst_n)
      (rd_en && !empty && !wr_en) |=> (count == $past(count) - 1))
    else $display("ASSERT_FAIL GOLD:g_read_decr t=%0t", $time);
endmodule
