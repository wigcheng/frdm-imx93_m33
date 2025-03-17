/*
 * Copyright 2022 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef _APP_H_
#define _APP_H_

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/*${macro:start}*/
#define EXAMPLE_LPSPI_MASTER_BASEADDR         LPSPI3
#define LPSPI_MASTER_CLOCK_ROOT               kCLOCK_Root_Lpspi3
#define LPSPI_MASTER_CLOCK_GATE               kCLOCK_Lpspi3
#define LPSPI_MASTER_CLK_FREQ                 (CLOCK_GetIpFreq(LPSPI_MASTER_CLOCK_ROOT))
#define EXAMPLE_LPSPI_MASTER_PCS_FOR_INIT     kLPSPI_Pcs0
#define EXAMPLE_LPSPI_MASTER_PCS_FOR_TRANSFER kLPSPI_MasterPcs0

#define EXAMPLE_LPSPI_DEALY_COUNT 0xfffff

#define BOARD_DC_RGPIO          GPIO2
#define BOARD_DC_RGPIO_PIN      0U
#define BOARD_RST_RGPIO         GPIO2
#define BOARD_RST_RGPIO_PIN     5U
#define BOARD_BUSY_RGPIO        GPIO2
#define BOARD_BUSY_RGPIO_PIN    26U
#define EXAMPLE_RGPIO_CLOCK_ROOT kCLOCK_Root_BusWakeup
#define EXAMPLE_RGPIO_CLOCK_GATE kCLOCK_Gpio2
/*${macro:end}*/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
/*${prototype:start}*/
void BOARD_InitHardware(void);
/*${prototype:end}*/

#endif /* _APP_H_ */
