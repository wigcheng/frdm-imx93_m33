/*
 * Copyright 2022 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_tmu.h"
#include "fsl_debug_console.h"
#include "board.h"
#include "app.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/
volatile tmu_interrupt_status_t g_tmuInterruptStausStruct;

/*******************************************************************************
 * Code
 ******************************************************************************/
/*!
 * @brief TMU ISR.
 */
void DEMO_TMU_IRQ_HANDLER_FUNC(void)
{
    float temp = 0.0f;

    TMU_GetInterruptStatusFlags(DEMO_TMU_BASE, (tmu_interrupt_status_t *)&g_tmuInterruptStausStruct);
    TMU_ClearInterruptStatusFlags(DEMO_TMU_BASE, g_tmuInterruptStausStruct.interruptDetectMask);
    if (0U != (g_tmuInterruptStausStruct.interruptDetectMask & kTMU_ImmediateTemperatureStatusFlags))
    {
        if (0U != (g_tmuInterruptStausStruct.immediateInterruptsSiteMask & kTMU_MonitorSite0))
        {
            TMU_GetImmediateTemperature(TMU, &temp);
            PRINTF("Board immediate temperature is %6.2f celsius degree.\r\n", (double)temp);
        }
        else
        {
            PRINTF("The TMU monitor failed to report temperature.");
        }
    }
    SDK_ISR_EXIT_BARRIER;
}

/*!
 * @brief Main function
 */
int main(void)
{
    tmu_config_t k_tmuConfig;
    tmu_thresold_config_t k_tmuThresoldConfig;

    BOARD_InitHardware();

    PRINTF("Start TMU monitor report example.\r\n");

    /* Initialize the TMU mode. */
    k_tmuConfig.monitorInterval      = DEMO_TMU_INTERVAL_VALUE;
    k_tmuConfig.monitorSiteSelection = kTMU_MonitorSite0; /* Monitor temperature of site 0. */
    k_tmuConfig.averageLPF           = kTMU_AverageLowPassFilter1_0;
    TMU_Init(DEMO_TMU_BASE, &k_tmuConfig);

    /* Set the temperature threshold. */
    k_tmuThresoldConfig.immediateThresoldEnable       = true;
    k_tmuThresoldConfig.averageThresoldEnable         = false;
    k_tmuThresoldConfig.averageCriticalThresoldEnable = false;
    k_tmuThresoldConfig.immediateThresoldValue        = DEMO_TMU_IMMEDIATE_THRESOLD;
    k_tmuThresoldConfig.averageThresoldValue          = 0U;
    k_tmuThresoldConfig.averageCriticalThresoldValue  = 0U;
    TMU_SetHighTemperatureThresold(DEMO_TMU_BASE, &k_tmuThresoldConfig);

    /* Enable the Immediate temperature threshold exceeded interrupt. */
    TMU_EnableInterrupts(DEMO_TMU_BASE, kTMU_ImmediateTemperatureInterruptEnable);
    EnableIRQ(DEMO_TMU_IRQ);

    /* Enable the monitor mode. */
    TMU_Enable(DEMO_TMU_BASE, true);

    while (true)
    {
    }
}
