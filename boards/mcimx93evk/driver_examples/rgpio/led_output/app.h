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
#define BOARD_LED_RGPIO          GPIO2
#define BOARD_LED_RGPIO_PIN      4U
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
