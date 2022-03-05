#ifndef UART_H_
#define UART_H_

	#include "stm32f4xx.h"
	#include "gpio_f429.h"

	#define	BR96		9600
	#define	BR1152		115200
	#define	BR192		19200
	#define printf(x)	printf_new(x)

	#define UART_DIV_CALC(PeriphClock,BR)	( ((PeriphClock) + ((BR)/2))/BR )

	void 	printf_new(uint8_t* data);
	uint8_t	uart1_read(void);

	uint8_t	init_uart1(uint32_t	BAUDRATE, uint32_t	APB1_HCLK);


#endif /* UART_H_ */
