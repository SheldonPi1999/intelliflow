/******************************************************************************
* File Name: main.c
*
* Version 2.10
*
* Description: 
*  This code example demonstrates the usage of the Software Transmit UART Component.
*
* Related Document: 
*  CE195379_Software_Transmit_UART_PSoC3_4_5LP.pdf
*
* Hardware Dependency: 
*  See CE195379_Software_Transmit_UART_PSoC3_4_5LP.pdf
*
*******************************************************************************
* Copyright (2018), Cypress Semiconductor Corporation. All rights reserved.
*******************************************************************************
* This software, including source code, documentation and related materials
* (“Software”), is owned by Cypress Semiconductor Corporation or one of its
* subsidiaries (“Cypress”) and is protected by and subject to worldwide patent
* protection (United States and foreign), United States copyright laws and
* international treaty provisions. Therefore, you may use this Software only
* as provided in the license agreement accompanying the software package from
* which you obtained this Software (“EULA”).
*
* If no EULA applies, Cypress hereby grants you a personal, nonexclusive,
* non-transferable license to copy, modify, and compile the Software source
* code solely for use in connection with Cypress’s integrated circuit products.
* Any reproduction, modification, translation, compilation, or representation
* of this Software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND, 
* EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED 
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress 
* reserves the right to make changes to the Software without notice. Cypress 
* does not assume any liability arising out of the application or use of the 
* Software or any product or circuit described in the Software. Cypress does 
* not authorize its products for use in any products where a malfunction or 
* failure of the Cypress product may reasonably be expected to result in 
* significant property damage, injury or death (“High Risk Product”). By 
* including Cypress’s product in a High Risk Product, the manufacturer of such 
* system or application assumes all risk of such use and in doing so agrees to 
* indemnify Cypress against all liability. 
*******************************************************************************/

#include <project.h>
#include <stdlib.h>

char byte[18];
uint8 count = 0;

CY_ISR(RX_Interrupt)
{
    byte[count] = UART_ESP_GetChar();
    
    if(byte[count])
    {
    count++;
    }
   
    if(count == 18)
    {
        count = 0;
        UART_Putty_UartPutString(byte);
        UART_Putty_UartPutCRLF(0); 
        UART_ESP_PutString("Hello from psoc 4!");
        memset(byte, ' ' , sizeof(byte));
        CyDelay(1000);
    }


}
 

int main()
{
    CyGlobalIntEnable;
    UART_Putty_Start();
    UART_ESP_Start();
    RX_isr_StartEx(RX_Interrupt);
   
    for(;;)
    {
       
    }
}
