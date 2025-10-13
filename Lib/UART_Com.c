/*****************************************************/
/* UART communication library                        */
/*****************************************************/

#include "UART_Com.h"

uint8_t uartBuf[UART_MSG_SIZE];

void COM_Init(void){
	HAL_UART_Receive_DMA(PC,uartBuf,UART_MSG_SIZE);
	
}