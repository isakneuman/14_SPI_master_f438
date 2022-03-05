#include "adc.h"

__IO	int16_t prev_value 	= 0;
__IO	int16_t new_value 	= 0;
__IO	uint8_t  diff_value 	= 50;

void	pf9_adc3_init(void)
{
	/***Conf ADC GPIO pin***/
	init_gpio(GPIOF, 9, GPIO_MODE_ANALOG);

	/***Conf ADC module***/
	/*Enable clock access to ADC*/
	RCC->APB2ENR	|=	RCC_APB2ENR_ADC3EN;

	/*Conversion sequence start*/
	ADC3->SQR3		|=	CHANEL_7<<ADC_SQR3_SQ1_Pos;

	/*Conversion seqience length*/
	ADC3->SQR1		|=	SQ_LENGHT_1<<ADC_SQR1_L_Pos;

	/*Enable ADC EOC interrupt*/
	ADC3->CR1		|=	ADC_CR1_EOCIE;
	NVIC_EnableIRQ(ADC_IRQn);

	/*Enable ADC module*/
	ADC3->CR2		|=	ADC_CR2_ADON;

}
void	ADC_IRQHandler(void)
{
	if(ADC3->SR & ADC_SR_EOC)
	{
		new_value = (uint16_t)ADC3->DR;
		stop_conversion();
	}
}

void	stop_conversion(void)
{
	/*STOP continuous*/
	ADC3->CR2		&=	~ADC_CR2_CONT;
}

void	start_conversion(void)
{
	/*Enable continuous conversion*/
	ADC3->CR2		|=	ADC_CR2_CONT;
	/*Start adc conversion*/
	ADC3->CR2		|=	ADC_CR2_SWSTART;
}

uint16_t	adc_read(void)
{
	/*wait for conversion to be complete*/
	while( !(ADC3->SR	&	ADC_SR_EOC) );

	/*Read converted result*/
	return	(ADC3->DR);
}
