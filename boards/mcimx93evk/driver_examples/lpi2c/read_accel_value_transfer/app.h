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
#define LPI2C_CLOCK_FREQUENCY    CLOCK_GetIpFreq(LPI2C_MASTER_CLOCK_ROOT)
#define BOARD_ACCEL_I2C_BASEADDR LPI2C1
#define LPI2C_MASTER_CLOCK_ROOT  kCLOCK_Root_Lpi2c1
#define LPI2C_MASTER_CLOCK_GATE  kCLOCK_Lpi2c1
/*${macro:end}*/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
/*${prototype:start}*/
void BOARD_InitHardware(void);
/*${prototype:end}*/

#endif /* _APP_H_ */
