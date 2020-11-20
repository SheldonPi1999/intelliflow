/***************************************************************************//**
* \file .h
* \version 4.0
*
* \brief
*  This private file provides constants and parameter values for the
*  SCB Component in _EZI2C mode.
*  Do not use this file or its content in your project.
*
* Note:
*
********************************************************************************
* \copyright
* Copyright 2013-2017, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SCB_EZI2C_PVT_EZI2C_slave_H)
#define CY_SCB_EZI2C_PVT_EZI2C_slave_H

#include "EZI2C_slave_EZI2C.h"


/***************************************
*      EZI2C Private Vars
***************************************/

extern volatile uint8 EZI2C_slave_curStatus;
extern uint8 EZI2C_slave_fsmState;

/* Variables intended to be used with Buffer 1: Primary slave address */
extern volatile uint8 * EZI2C_slave_dataBuffer1;
extern uint16 EZI2C_slave_bufSizeBuf1;
extern uint16 EZI2C_slave_protectBuf1;
extern uint8 EZI2C_slave_offsetBuf1;
extern uint16 EZI2C_slave_indexBuf1;

#if(EZI2C_slave_SECONDARY_ADDRESS_ENABLE_CONST)
    extern uint8 EZI2C_slave_addrBuf1;
    extern uint8 EZI2C_slave_addrBuf2;

    /* Variables intended to be used with Buffer 2: Primary slave address */
    extern volatile uint8 * EZI2C_slave_dataBuffer2;
    extern uint16 EZI2C_slave_bufSizeBuf2;
    extern uint16 EZI2C_slave_protectBuf2;
    extern uint8 EZI2C_slave_offsetBuf2;
    extern uint16 EZI2C_slave_indexBuf2;
#endif /* (EZI2C_slave_SECONDARY_ADDRESS_ENABLE_CONST) */


/***************************************
*     Private Function Prototypes
***************************************/

#if(EZI2C_slave_SCB_MODE_EZI2C_CONST_CFG)
    void EZI2C_slave_EzI2CInit(void);
#endif /* (EZI2C_slave_SCB_MODE_EZI2C_CONST_CFG) */

void EZI2C_slave_EzI2CStop(void);
#if(EZI2C_slave_EZI2C_WAKE_ENABLE_CONST)
    void EZI2C_slave_EzI2CSaveConfig(void);
    void EZI2C_slave_EzI2CRestoreConfig(void);
#endif /* (EZI2C_slave_EZI2C_WAKE_ENABLE_CONST) */

#endif /* (CY_SCB__EZI2C_PVT_EZI2C_slave_H) */


/* [] END OF FILE */