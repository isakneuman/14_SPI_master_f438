#include "systick.h"


uint8_t	system_init_HSI_PLL(uint8_t PLLP,
							uint16_t PLLN,
							uint8_t PLLM,
							uint8_t LATENCY)
{

	uint16_t	timeout_counter = 0;

	FLASH->ACR |= LATENCY<<FLASH_ACR_LATENCY_Pos;

	SET_BIT(RCC->CR,RCC_CR_HSION);
	timeout_counter	=	0;
	while( 	!(RCC->CR & RCC_CR_HSIRDY) )
	{
		if(timeout_counter++>=TIMEOUT_value)
		{
			return	ERROR_HSION_DOSNT_READY;
		}
	}
	CLEAR_REG(RCC->PLLCFGR);
	SET_BIT(RCC->PLLCFGR,(PLLP<<RCC_PLLCFGR_PLLP_Pos));
	SET_BIT(RCC->PLLCFGR,(PLLN<<RCC_PLLCFGR_PLLN_Pos));
	SET_BIT(RCC->PLLCFGR,(PLLM<<RCC_PLLCFGR_PLLM_Pos));

	SET_BIT(RCC->CR,RCC_CR_PLLON);
	timeout_counter	=	0;
	while( 	!(RCC->CR & RCC_CR_PLLRDY) )
	{
		if(timeout_counter++>=TIMEOUT_value)
		{
			CLEAR_BIT(RCC->CR,RCC_CR_PLLON);
			return	ERROR_PLL_DOSNT_READY;
		}
	}

	SET_BIT(RCC->CFGR,RCC_CFGR_PPRE1_DIV4);
	SET_BIT(RCC->CFGR,RCC_CFGR_PPRE2_DIV2);

	SET_BIT(RCC->CFGR,RCC_CFGR_SW_PLL<<RCC_CFGR_SW_Pos);
	timeout_counter	=	0;
	while( 	!(RCC->CFGR & RCC_CFGR_SWS_PLL) )
	{
		if(timeout_counter++>=TIMEOUT_value)
		{
			CLEAR_BIT(RCC->CR,(SW_PLL<<RCC_CFGR_SW_Pos));
			return	ERROR_PLLSW_DOESNT_READY;
		}
	}
	CLEAR_BIT(RCC->CR,RCC_CR_HSION);
	SysTick_Config(SYS_FREQ/1000);

	return 0;
}



