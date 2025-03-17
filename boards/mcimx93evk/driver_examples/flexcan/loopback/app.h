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
#define EXAMPLE_CAN                CAN1
#define EXAMPLE_FLEXCAN_IRQn       CAN1_IRQn
#define EXAMPLE_FLEXCAN_IRQHandler CAN1_IRQHandler
#define RX_MESSAGE_BUFFER_NUM      (1)
#define TX_MESSAGE_BUFFER_NUM      (0)

#define FLEXCAN_CLOCK_ROOT   (kCLOCK_Root_Can1)
#define FLEXCAN_CLOCK_GATE   kCLOCK_Can1
#define EXAMPLE_CAN_CLK_FREQ (CLOCK_GetIpFreq(FLEXCAN_CLOCK_ROOT))
/* Set USE_IMPROVED_TIMING_CONFIG macro to use api to calculates the improved CAN / CAN FD timing values. */
#define USE_IMPROVED_TIMING_CONFIG (1U)
/*${macro:end}*/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
/*${prototype:start}*/
void BOARD_InitHardware(void);
/*${prototype:end}*/

#endif /* _APP_H_ */
