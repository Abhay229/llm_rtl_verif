# SVA reference patterns (retrieval corpus). Chunks are split on "## ".

## Implication basics
`a |-> b`: if a holds in a cycle, b must hold in the same cycle. `a |=> b`: b must hold in the next cycle.
Prefer boolean antecedents so the property can be checked for vacuity (does `a` ever occur?).

## Sampled-value functions
`$past(x)` is x one cycle ago. `$rose(x)`, `$fell(x)`, `$stable(x)`, `$changed(x)` compare x with the previous cycle.
Example: `(a && !b) |=> (cnt == $past(cnt) + 1)`.

## Invariants
A fact that must hold every cycle has no antecedent, e.g. `count <= DEPTH` or `!(full && empty)`.
Use them for flag definitions: `full == (count == DEPTH)`.

## FIFO: no overflow
When full and writing without a simultaneous read, the occupancy must not change:
`(full && wr_en && !rd_en) |=> (count == $past(count))`.

## FIFO: no underflow
When empty and reading without a simultaneous write, occupancy must not change:
`(empty && rd_en && !wr_en) |=> (count == $past(count))`.

## FIFO: occupancy accounting
Write only: count +1. Read only: count -1. Both (and neither full nor empty): count unchanged.
Mind corner cases: a read at empty or a write at full is ignored, so guard antecedents with `!empty` / `!full`.

## Common mistakes
Forgetting the simultaneous read+write case makes a property too strong and it fails on legal behavior.
`|->` vs `|=>`: registered state changes show up one cycle later, so use `|=>` for count/pointer updates.
Use `==` not `===`. Do not use `##`, sequences, `throughout`, `intersect`, `first_match`.
Properties whose antecedent never fires pass vacuously and prove nothing.

## Reset
The framework already applies `disable iff (!rst_n)`. Do not add reset handling in properties.
