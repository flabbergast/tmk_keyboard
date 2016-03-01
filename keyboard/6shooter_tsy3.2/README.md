# 6shooter (CM Switch tester)

CM switch tester (2x3 switches), wired using [amoeba] into a 2x3 matrix. LEDs also wired into a 2x3 matrix.

Set up with Teensy 3.2, with the following pin connections:

|TsyPin|MCUpin|Matrix|
|------|------|------|
|  14  |  D1  | Row2 |
|  15  |  C0  | Row1 |
|  16  |  B0  | Col3 |
|  17  |  B1  | Col2 |
|  18  |  B3  | LEDc3|
|  19  |  B2  | Col1 |
|  20  |  D5  | LEDr1|
|  21  |  D6  | LEDr2|
|  22  |  C1  | LEDc2|
|  23  |  C2  | LEDc1|

Matrix: rows strobe low, sense columns (internal pull-ups).
LEDs: on = row high, col low.

[amoeba]: https://deskthority.net/workshop-f7/another-single-switch-circuit-board-t11420.html