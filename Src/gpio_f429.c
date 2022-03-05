#include "gpio_f429.h"



uint8_t		init_gpio(	GPIO_TypeDef *PORT,
						uint8_t PIN,
						uint8_t MODE )
{
	if(gpio_port_clock(PORT))
	{
		return	ERROR_PORT_DOESNT_CLOCK;
	}
	PORT->MODER		|=	(MODE<<(PIN*TWO_BIT));
	return 0;
}

uint8_t		gpio_set_AFR(	GPIO_TypeDef *PORT,
							uint8_t PIN,
							uint8_t	AF )
{
	uint32_t	*reg;
	if(PIN<=7)
	{
		PORT->AFR[0]	|=	(AF<<(PIN*FOUR_BIT));
		return	0;
	}
	else
	{
		PIN	-=	8;
		PORT->AFR[1]	|=	(AF<<(PIN*FOUR_BIT));
		return 0;
	}
	return 0x03;
}

void		toggle_pin( GPIO_TypeDef *PORT,
						uint8_t PIN  )
{
	PORT->ODR	^=	(1<<PIN);
}
void		set_pin( 	GPIO_TypeDef *PORT,
					 	uint8_t PIN  )
{
	PORT->BSRR	|=	(1<<PIN);
}

void		reset_pin( 	GPIO_TypeDef *PORT,
					 	uint8_t PIN  )
{
	PORT->BSRR	|=	(1<<(PIN+SECOND_FLOOR));
}

uint8_t		gpio_port_clock(GPIO_TypeDef *PORT)
{
	switch(*((uint32_t*)(&PORT))){
		case GPIOA_BASE:
			RCC->AHB1ENR	|= 	RCC_AHB1ENR_GPIOAEN;
			return 0;
		case GPIOB_BASE:
			RCC->AHB1ENR	|=	RCC_AHB1ENR_GPIOBEN;
			return 0;
		case GPIOC_BASE:
			RCC->AHB1ENR	|=	RCC_AHB1ENR_GPIOCEN;
			return 0;
		case GPIOD_BASE:
			RCC->AHB1ENR	|= 	RCC_AHB1ENR_GPIODEN;
			return 0;
		case GPIOE_BASE:
			RCC->AHB1ENR	|=	RCC_AHB1ENR_GPIOEEN;
			return 0;
		case GPIOF_BASE:
			RCC->AHB1ENR	|=	RCC_AHB1ENR_GPIOFEN;
			return 0;
		case GPIOG_BASE:
			RCC->AHB1ENR	|=	RCC_AHB1ENR_GPIOGEN;
			return 0;
		case GPIOH_BASE:
			RCC->AHB1ENR	|=	RCC_AHB1ENR_GPIOHEN;
			return 0;
		default:
			return 0x01;
	}
	return 0x01;
}

