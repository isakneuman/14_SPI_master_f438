#include "timer.h"

__IO	uint32_t	ms	=	0;

void	init_timer(void)
{
	RCC->APB1ENR	|=	RCC_APB1ENR_TIM6EN;

	TIM6->ARR	=	mS_CALC(APB1_FREQ);
	TIM6->PSC	=	0;
	TIM6->CNT	=	0;

	TIM6->CR1	|=	TIM_CR1_CEN;

	TIM6->DIER	|=	TIM_DIER_UIE;
	NVIC_EnableIRQ(TIM6_DAC_IRQn);
}

inline void enable_continuous_mode(TIMEOUT_t* timer)
{
	timer->timeout_state	|=	TIMEOUT_STATE_CONTINUOUS;
}

void		stop_timeout(TIMEOUT_t* timer)
{
	timer->timeout_state	&=	~TIMEOUT_STATE_ON;
}

void	 	start_timeout(TIMEOUT_t* timer)
{
	timer->timeout_state	|=	TIMEOUT_STATE_ON;
	timer->start_ms	=	ms;
}
uint8_t 	check_timeout(TIMEOUT_t* timer)
{
	if(timer->timeout_state & TIMEOUT_STATE_ON)
	{
		if(ms >= (timer->time_delay + timer->start_ms))
		{
			if(timer->timeout_state & TIMEOUT_STATE_CONTINUOUS)
				timer->start_ms = ms;
			else
				stop_timeout(timer);
			return 1;
		}
	}
	return 	0;
}

TIMEOUT_t	init_timeout(uint32_t	duration)
{
	TIMEOUT_t	timer;
	timer.start_ms		=	0;
	timer.time_delay	=	duration;
	timer.timeout_state	=	0;
	return timer;
}

void TIM6_DAC_IRQHandler(void)
{
	TIM6->SR	&= ~TIM_SR_UIF;
	ms++;
}


