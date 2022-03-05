#include "exti.h"

void	EXTI4_IRQHandler(void);


void	init_EXTI_PE4(void)
{
	init_gpio(GPIOE, 4, GPIO_MODE_INPUT);
	GPIOE->PUPDR	|=	GPIO_PUPDR_PULLDWN<<GPIO_PUPDR_PUPD4_Pos;
	RCC->APB2ENR	|=	RCC_APB2ENR_SYSCFGEN;
	SYSCFG->EXTICR[1]	|=	SYSCFG_EXTICR2_EXTI4_PE;
	EXTI->IMR		|=	EXTI_IMR_MR4;
	EXTI->FTSR		|=	EXTI_FTSR_TR4;
	EXTI->RTSR		|=	EXTI_RTSR_TR4;
	NVIC_EnableIRQ(EXTI4_IRQn);
}

void	EXTI4_IRQHandler(void)
{
//	if()
//	{
//	}
//	else
//	{
//		duration_lenght = get_secondumer_value();
//	}
//	EXTI->PR	|=	EXTI_PR_PR4;
}
