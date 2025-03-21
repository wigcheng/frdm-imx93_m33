# lptmr

## Overview
The LPTMR project is a simple demonstration program of the SDK LPTMR driver. It sets up the LPTMR
hardware block to trigger a periodic interrupt after every 1 second. When the LPTMR interrupt is triggered
a message a printed on the UART terminal and an LED is toggled on the board.

## Supported Boards
- [EVK9-MIMX8ULP](../../_boards/evk9mimx8ulp/driver_examples/lptmr/example_board_readme.md)
- [EVK-MCIMX7ULP](../../_boards/evkmcimx7ulp/driver_examples/lptmr/example_board_readme.md)
- [EVK-MIMX8ULP](../../_boards/evkmimx8ulp/driver_examples/lptmr/example_board_readme.md)
- [MIMXRT1180-EVK](../../_boards/evkmimxrt1180/driver_examples/lptmr/example_board_readme.md)
- [FRDM-K22F](../../_boards/frdmk22f/driver_examples/lptmr/example_board_readme.md)
- [FRDM-K32L2A4S](../../_boards/frdmk32l2a4s/driver_examples/lptmr/example_board_readme.md)
- [FRDM-K32L2B](../../_boards/frdmk32l2b/driver_examples/lptmr/example_board_readme.md)
- [FRDM-K32L3A6](../../_boards/frdmk32l3a6/driver_examples/lptmr/example_board_readme.md)
- [FRDM-KE15Z](../../_boards/frdmke15z/driver_examples/lptmr/example_board_readme.md)
- [FRDM-KE16Z](../../_boards/frdmke16z/driver_examples/lptmr/example_board_readme.md)
- [FRDM-KE17Z](../../_boards/frdmke17z/driver_examples/lptmr/example_board_readme.md)
- [FRDM-KE17Z512](../../_boards/frdmke17z512/driver_examples/lptmr/example_board_readme.md)
- [FRDM-MCXA153](../../_boards/frdmmcxa153/driver_examples/lptmr/example_board_readme.md)
- [FRDM-MCXA156](../../_boards/frdmmcxa156/driver_examples/lptmr/example_board_readme.md)
- [FRDM-MCXA166](../../_boards/frdmmcxa166/driver_examples/lptmr/example_board_readme.md)
- [FRDM-MCXA276](../../_boards/frdmmcxa276/driver_examples/lptmr/example_board_readme.md)
- [FRDM-MCXC041](../../_boards/frdmmcxc041/driver_examples/lptmr/example_board_readme.md)
- [FRDM-MCXC242](../../_boards/frdmmcxc242/driver_examples/lptmr/example_board_readme.md)
- [FRDM-MCXC444](../../_boards/frdmmcxc444/driver_examples/lptmr/example_board_readme.md)
- [FRDM-MCXN236](../../_boards/frdmmcxn236/driver_examples/lptmr/example_board_readme.md)
- [FRDM-MCXN947](../../_boards/frdmmcxn947/driver_examples/lptmr/example_board_readme.md)
- [FRDM-MCXW71](../../_boards/frdmmcxw71/driver_examples/lptmr/example_board_readme.md)
- [IMX95LP4XEVK-15](../../_boards/imx95lp4xevk15/driver_examples/lptmr/example_board_readme.md)
- [IMX95LPD5EVK-19](../../_boards/imx95lpd5evk19/driver_examples/lptmr/example_board_readme.md)
- [imx95verdinevk](../../_boards/imx95verdinevk/driver_examples/lptmr/example_board_readme.md)
- [K32W148-EVK](../../_boards/k32w148evk/driver_examples/lptmr/example_board_readme.md)
- [KW45B41Z-EVK](../../_boards/kw45b41zevk/driver_examples/lptmr/example_board_readme.md)
- [KW47-EVK](../../_boards/kw47evk/driver_examples/lptmr/example_board_readme.md)
- [MCIMX93AUTO-EVK](../../_boards/mcimx93autoevk/driver_examples/lptmr/example_board_readme.md)
- [MCIMX93-EVK](../../_boards/mcimx93evk/driver_examples/lptmr/example_board_readme.md)
- [MCIMX93-QSB](../../_boards/mcimx93qsb/driver_examples/lptmr/example_board_readme.md)
- [MCX-N5XX-EVK](../../_boards/mcxn5xxevk/driver_examples/lptmr/example_board_readme.md)
- [MCX-N9XX-EVK](../../_boards/mcxn9xxevk/driver_examples/lptmr/example_board_readme.md)
- [MCX-W72-EVK](../../_boards/mcxw72evk/driver_examples/lptmr/example_board_readme.md)
- [TWR-KM34Z50MV3](../../_boards/twrkm34z50mv3/driver_examples/lptmr/example_board_readme.md)
- [TWR-KM34Z75M](../../_boards/twrkm34z75m/driver_examples/lptmr/example_board_readme.md)
- [TWR-KM35Z75M](../../_boards/twrkm35z75m/driver_examples/lptmr/example_board_readme.md)
