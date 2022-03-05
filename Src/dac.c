#include "dac.h"

void	init_dac(void)
{
	RCC->APB1ENR	|=	RCC_APB1ENR_DACEN;
	init_gpio(GPIOA, DAC_OUT2, GPIO_MODE_ANALOG);

}
