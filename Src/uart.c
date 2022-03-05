#include "uart.h"

uint8_t	init_uart1(uint32_t	BAUDRATE, uint32_t	APB1_HCLK)
{
	init_gpio(GPIOA, 9, GPIO_MODE_ALTER);
	init_gpio(GPIOA, 10, GPIO_MODE_ALTER);
	gpio_set_AFR(GPIOA, 9, AF7);
	gpio_set_AFR(GPIOA, 10, AF7);
	RCC->APB2ENR	|=	RCC_APB2ENR_USART1EN;

	USART1->BRR		=	UART_DIV_CALC(APB1_HCLK,BAUDRATE);

	USART1->CR1		=	USART_CR1_TE|USART_CR1_RE|USART_CR1_RXNEIE;
	NVIC_EnableIRQ(USART1_IRQn);

	USART1->CR1		|=	USART_CR1_UE;
}

void USART1_IRQHandler(void)
{
	if(USART1->SR & USART_SR_RXNE)
	{
	}
}

void printf_new(uint8_t* data)
{
	while(*data != '\0')
	{
		while( !(USART1->SR & USART_SR_TXE) );
		USART1->DR	= *data++;
	}
}

uint8_t	uart1_read(void)
{
	while( !(USART1->SR & USART_SR_RXNE) );
	return USART1->DR;
}
