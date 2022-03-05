#include "spif429.h"

void	init_spi1_gpio(void);
uint8_t	data = 0;

void	slave_select_on(void)
{
	GPIOA->BSRR	=	GPIO_BSRR_BR4;
}
void	slave_select_off(void)
{
	GPIOA->BSRR	=	GPIO_BSRR_BS4;
}
void	init_spi1(void)
{
	init_spi1_gpio();
	spi1_config();

}

void	init_spi1_gpio(void)
{

	init_gpio(GPIOA, SPI1_MISO, GPIO_MODE_ALTER);
	gpio_set_AFR(GPIOA, SPI1_MISO, AF5);

	init_gpio(GPIOA,SPI1_MOSI,GPIO_MODE_ALTER);
	gpio_set_AFR(GPIOA,SPI1_MOSI,AF5);

	init_gpio(GPIOA,SPI1_SCK,GPIO_MODE_ALTER);
	gpio_set_AFR(GPIOA,SPI1_SCK,AF5);

	init_gpio(GPIOA,SPI1_NSS,GPIO_MODE_OUTPUT);
	reset_pin(GPIOA, SPI1_NSS);
}


void	spi1_config(void)
{
	RCC->APB2ENR	|=	RCC_APB2ENR_SPI1EN;

	SPI1->CR1 	|=	SPI_CR1_SSI|
					SPI_CR1_SSM|
					SPI_CR1_MSTR|
					SPI_CR1_SPE;
}

void	SPI1_IRQHandler(void)
{
	if(SPI1->SR	& SPI_SR_RXNE)
	{
		data = SPI1->DR;
	}
}

void	spi1_recieve(uint8_t *data, uint8_t size)
{
	while(size--)
	{
		SPI1->DR = 0;
		while(!(SPI1->SR & SPI_SR_RXNE));
		*data++ = (SPI1->DR);
	}
}

void	spi1_transmit(uint8_t *data, uint8_t size)
{
	for(uint8_t i = 0; i < size; i++)
	{
		while(!(SPI1->SR & SPI_SR_TXE));
		SPI1->DR	=	*data++;
	}
	while(!(SPI1->SR & SPI_SR_TXE));
	while((SPI1->SR & SPI_SR_BSY));
	(void*)SPI1->DR;
	(void*)SPI1->SR;
}
void	spi1_transmit_byte(uint8_t data)
{
	while(!(SPI1->SR & SPI_SR_TXE));
	SPI1->DR	=	data;
	while(!(SPI1->SR & SPI_SR_TXE));
	while((SPI1->SR & SPI_SR_BSY));
	(void*)SPI1->DR;
	(void*)SPI1->SR;
}





















