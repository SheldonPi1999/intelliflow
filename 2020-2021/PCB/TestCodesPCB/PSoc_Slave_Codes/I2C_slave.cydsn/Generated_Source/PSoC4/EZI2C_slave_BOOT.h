/***************************************************************************//**
* \file EZI2C_slave_BOOT.h
* \version 4.0
*
* \brief
*  This file provides constants and parameter values of the bootloader
*  communication APIs for the SCB Component.
*
* Note:
*
********************************************************************************
* \copyright
* Copyright 2014-2017, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_SCB_BOOT_EZI2C_slave_H)
#define CY_SCB_BOOT_EZI2C_slave_H

#include "EZI2C_slave_PVT.h"

#if (EZI2C_slave_SCB_MODE_I2C_INC)
    #include "EZI2C_slave_I2C.h"
#endif /* (EZI2C_slave_SCB_MODE_I2C_INC) */

#if (EZI2C_slave_SCB_MODE_EZI2C_INC)
    #include "EZI2C_slave_EZI2C.h"
#endif /* (EZI2C_slave_SCB_MODE_EZI2C_INC) */

#if (EZI2C_slave_SCB_MODE_SPI_INC || EZI2C_slave_SCB_MODE_UART_INC)
    #include "EZI2C_slave_SPI_UART.h"
#endif /* (EZI2C_slave_SCB_MODE_SPI_INC || EZI2C_slave_SCB_MODE_UART_INC) */


/***************************************
*  Conditional Compilation Parameters
****************************************/

/* Bootloader communication interface enable */
#define EZI2C_slave_BTLDR_COMM_ENABLED ((CYDEV_BOOTLOADER_IO_COMP == CyBtldr_EZI2C_slave) || \
                                             (CYDEV_BOOTLOADER_IO_COMP == CyBtldr_Custom_Interface))

/* Enable I2C bootloader communication */
#if (EZI2C_slave_SCB_MODE_I2C_INC)
    #define EZI2C_slave_I2C_BTLDR_COMM_ENABLED     (EZI2C_slave_BTLDR_COMM_ENABLED && \
                                                            (EZI2C_slave_SCB_MODE_UNCONFIG_CONST_CFG || \
                                                             EZI2C_slave_I2C_SLAVE_CONST))
#else
     #define EZI2C_slave_I2C_BTLDR_COMM_ENABLED    (0u)
#endif /* (EZI2C_slave_SCB_MODE_I2C_INC) */

/* EZI2C does not support bootloader communication. Provide empty APIs */
#if (EZI2C_slave_SCB_MODE_EZI2C_INC)
    #define EZI2C_slave_EZI2C_BTLDR_COMM_ENABLED   (EZI2C_slave_BTLDR_COMM_ENABLED && \
                                                         EZI2C_slave_SCB_MODE_UNCONFIG_CONST_CFG)
#else
    #define EZI2C_slave_EZI2C_BTLDR_COMM_ENABLED   (0u)
#endif /* (EZI2C_slave_EZI2C_BTLDR_COMM_ENABLED) */

/* Enable SPI bootloader communication */
#if (EZI2C_slave_SCB_MODE_SPI_INC)
    #define EZI2C_slave_SPI_BTLDR_COMM_ENABLED     (EZI2C_slave_BTLDR_COMM_ENABLED && \
                                                            (EZI2C_slave_SCB_MODE_UNCONFIG_CONST_CFG || \
                                                             EZI2C_slave_SPI_SLAVE_CONST))
#else
        #define EZI2C_slave_SPI_BTLDR_COMM_ENABLED (0u)
#endif /* (EZI2C_slave_SPI_BTLDR_COMM_ENABLED) */

/* Enable UART bootloader communication */
#if (EZI2C_slave_SCB_MODE_UART_INC)
       #define EZI2C_slave_UART_BTLDR_COMM_ENABLED    (EZI2C_slave_BTLDR_COMM_ENABLED && \
                                                            (EZI2C_slave_SCB_MODE_UNCONFIG_CONST_CFG || \
                                                             (EZI2C_slave_UART_RX_DIRECTION && \
                                                              EZI2C_slave_UART_TX_DIRECTION)))
#else
     #define EZI2C_slave_UART_BTLDR_COMM_ENABLED   (0u)
#endif /* (EZI2C_slave_UART_BTLDR_COMM_ENABLED) */

/* Enable bootloader communication */
#define EZI2C_slave_BTLDR_COMM_MODE_ENABLED    (EZI2C_slave_I2C_BTLDR_COMM_ENABLED   || \
                                                     EZI2C_slave_SPI_BTLDR_COMM_ENABLED   || \
                                                     EZI2C_slave_EZI2C_BTLDR_COMM_ENABLED || \
                                                     EZI2C_slave_UART_BTLDR_COMM_ENABLED)


/***************************************
*        Function Prototypes
***************************************/

#if defined(CYDEV_BOOTLOADER_IO_COMP) && (EZI2C_slave_I2C_BTLDR_COMM_ENABLED)
    /* I2C Bootloader physical layer functions */
    void EZI2C_slave_I2CCyBtldrCommStart(void);
    void EZI2C_slave_I2CCyBtldrCommStop (void);
    void EZI2C_slave_I2CCyBtldrCommReset(void);
    cystatus EZI2C_slave_I2CCyBtldrCommRead       (uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);
    cystatus EZI2C_slave_I2CCyBtldrCommWrite(const uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);

    /* Map I2C specific bootloader communication APIs to SCB specific APIs */
    #if (EZI2C_slave_SCB_MODE_I2C_CONST_CFG)
        #define EZI2C_slave_CyBtldrCommStart   EZI2C_slave_I2CCyBtldrCommStart
        #define EZI2C_slave_CyBtldrCommStop    EZI2C_slave_I2CCyBtldrCommStop
        #define EZI2C_slave_CyBtldrCommReset   EZI2C_slave_I2CCyBtldrCommReset
        #define EZI2C_slave_CyBtldrCommRead    EZI2C_slave_I2CCyBtldrCommRead
        #define EZI2C_slave_CyBtldrCommWrite   EZI2C_slave_I2CCyBtldrCommWrite
    #endif /* (EZI2C_slave_SCB_MODE_I2C_CONST_CFG) */

#endif /* defined(CYDEV_BOOTLOADER_IO_COMP) && (EZI2C_slave_I2C_BTLDR_COMM_ENABLED) */


#if defined(CYDEV_BOOTLOADER_IO_COMP) && (EZI2C_slave_EZI2C_BTLDR_COMM_ENABLED)
    /* Bootloader physical layer functions */
    void EZI2C_slave_EzI2CCyBtldrCommStart(void);
    void EZI2C_slave_EzI2CCyBtldrCommStop (void);
    void EZI2C_slave_EzI2CCyBtldrCommReset(void);
    cystatus EZI2C_slave_EzI2CCyBtldrCommRead       (uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);
    cystatus EZI2C_slave_EzI2CCyBtldrCommWrite(const uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);

    /* Map EZI2C specific bootloader communication APIs to SCB specific APIs */
    #if (EZI2C_slave_SCB_MODE_EZI2C_CONST_CFG)
        #define EZI2C_slave_CyBtldrCommStart   EZI2C_slave_EzI2CCyBtldrCommStart
        #define EZI2C_slave_CyBtldrCommStop    EZI2C_slave_EzI2CCyBtldrCommStop
        #define EZI2C_slave_CyBtldrCommReset   EZI2C_slave_EzI2CCyBtldrCommReset
        #define EZI2C_slave_CyBtldrCommRead    EZI2C_slave_EzI2CCyBtldrCommRead
        #define EZI2C_slave_CyBtldrCommWrite   EZI2C_slave_EzI2CCyBtldrCommWrite
    #endif /* (EZI2C_slave_SCB_MODE_EZI2C_CONST_CFG) */

#endif /* defined(CYDEV_BOOTLOADER_IO_COMP) && (EZI2C_slave_EZI2C_BTLDR_COMM_ENABLED) */

#if defined(CYDEV_BOOTLOADER_IO_COMP) && (EZI2C_slave_SPI_BTLDR_COMM_ENABLED)
    /* SPI Bootloader physical layer functions */
    void EZI2C_slave_SpiCyBtldrCommStart(void);
    void EZI2C_slave_SpiCyBtldrCommStop (void);
    void EZI2C_slave_SpiCyBtldrCommReset(void);
    cystatus EZI2C_slave_SpiCyBtldrCommRead       (uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);
    cystatus EZI2C_slave_SpiCyBtldrCommWrite(const uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);

    /* Map SPI specific bootloader communication APIs to SCB specific APIs */
    #if (EZI2C_slave_SCB_MODE_SPI_CONST_CFG)
        #define EZI2C_slave_CyBtldrCommStart   EZI2C_slave_SpiCyBtldrCommStart
        #define EZI2C_slave_CyBtldrCommStop    EZI2C_slave_SpiCyBtldrCommStop
        #define EZI2C_slave_CyBtldrCommReset   EZI2C_slave_SpiCyBtldrCommReset
        #define EZI2C_slave_CyBtldrCommRead    EZI2C_slave_SpiCyBtldrCommRead
        #define EZI2C_slave_CyBtldrCommWrite   EZI2C_slave_SpiCyBtldrCommWrite
    #endif /* (EZI2C_slave_SCB_MODE_SPI_CONST_CFG) */

#endif /* defined(CYDEV_BOOTLOADER_IO_COMP) && (EZI2C_slave_SPI_BTLDR_COMM_ENABLED) */

#if defined(CYDEV_BOOTLOADER_IO_COMP) && (EZI2C_slave_UART_BTLDR_COMM_ENABLED)
    /* UART Bootloader physical layer functions */
    void EZI2C_slave_UartCyBtldrCommStart(void);
    void EZI2C_slave_UartCyBtldrCommStop (void);
    void EZI2C_slave_UartCyBtldrCommReset(void);
    cystatus EZI2C_slave_UartCyBtldrCommRead       (uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);
    cystatus EZI2C_slave_UartCyBtldrCommWrite(const uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);

    /* Map UART specific bootloader communication APIs to SCB specific APIs */
    #if (EZI2C_slave_SCB_MODE_UART_CONST_CFG)
        #define EZI2C_slave_CyBtldrCommStart   EZI2C_slave_UartCyBtldrCommStart
        #define EZI2C_slave_CyBtldrCommStop    EZI2C_slave_UartCyBtldrCommStop
        #define EZI2C_slave_CyBtldrCommReset   EZI2C_slave_UartCyBtldrCommReset
        #define EZI2C_slave_CyBtldrCommRead    EZI2C_slave_UartCyBtldrCommRead
        #define EZI2C_slave_CyBtldrCommWrite   EZI2C_slave_UartCyBtldrCommWrite
    #endif /* (EZI2C_slave_SCB_MODE_UART_CONST_CFG) */

#endif /* defined(CYDEV_BOOTLOADER_IO_COMP) && (EZI2C_slave_UART_BTLDR_COMM_ENABLED) */

/**
* \addtogroup group_bootloader
* @{
*/

#if defined(CYDEV_BOOTLOADER_IO_COMP) && (EZI2C_slave_BTLDR_COMM_ENABLED)
    #if (EZI2C_slave_SCB_MODE_UNCONFIG_CONST_CFG)
        /* Bootloader physical layer functions */
        void EZI2C_slave_CyBtldrCommStart(void);
        void EZI2C_slave_CyBtldrCommStop (void);
        void EZI2C_slave_CyBtldrCommReset(void);
        cystatus EZI2C_slave_CyBtldrCommRead       (uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);
        cystatus EZI2C_slave_CyBtldrCommWrite(const uint8 pData[], uint16 size, uint16 * count, uint8 timeOut);
    #endif /* (EZI2C_slave_SCB_MODE_UNCONFIG_CONST_CFG) */

    /* Map SCB specific bootloader communication APIs to common APIs */
    #if (CYDEV_BOOTLOADER_IO_COMP == CyBtldr_EZI2C_slave)
        #define CyBtldrCommStart    EZI2C_slave_CyBtldrCommStart
        #define CyBtldrCommStop     EZI2C_slave_CyBtldrCommStop
        #define CyBtldrCommReset    EZI2C_slave_CyBtldrCommReset
        #define CyBtldrCommWrite    EZI2C_slave_CyBtldrCommWrite
        #define CyBtldrCommRead     EZI2C_slave_CyBtldrCommRead
    #endif /* (CYDEV_BOOTLOADER_IO_COMP == CyBtldr_EZI2C_slave) */

#endif /* defined(CYDEV_BOOTLOADER_IO_COMP) && (EZI2C_slave_BTLDR_COMM_ENABLED) */

/** @} group_bootloader */

/***************************************
*           API Constants
***************************************/

/* Timeout unit in milliseconds */
#define EZI2C_slave_WAIT_1_MS  (1u)

/* Return number of bytes to copy into bootloader buffer */
#define EZI2C_slave_BYTES_TO_COPY(actBufSize, bufSize) \
                            ( ((uint32)(actBufSize) < (uint32)(bufSize)) ? \
                                ((uint32) (actBufSize)) : ((uint32) (bufSize)) )

/* Size of Read/Write buffers for I2C bootloader  */
#define EZI2C_slave_I2C_BTLDR_SIZEOF_READ_BUFFER   (64u)
#define EZI2C_slave_I2C_BTLDR_SIZEOF_WRITE_BUFFER  (64u)

/* Byte to byte time interval: calculated basing on current component
* data rate configuration, can be defined in project if required.
*/
#ifndef EZI2C_slave_SPI_BYTE_TO_BYTE
    #define EZI2C_slave_SPI_BYTE_TO_BYTE   (160u)
#endif

/* Byte to byte time interval: calculated basing on current component
* baud rate configuration, can be defined in the project if required.
*/
#ifndef EZI2C_slave_UART_BYTE_TO_BYTE
    #define EZI2C_slave_UART_BYTE_TO_BYTE  (2500u)
#endif /* EZI2C_slave_UART_BYTE_TO_BYTE */

#endif /* (CY_SCB_BOOT_EZI2C_slave_H) */


/* [] END OF FILE */