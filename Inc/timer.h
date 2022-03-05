#ifndef TIMER_H_
#define TIMER_H_

	#include "stm32f4xx.h"
	#include "gpio_f429.h"
	#include "sysconfig.h"

	#define	TIMEOUT_STATE_ON			(1<<0)
	#define	TIMEOUT_STATE_CONTINUOUS	(1<<1)

	void	init_timer(void);

	typedef	struct {
		uint32_t 	start_ms;
		uint32_t 	time_delay;
		uint8_t  	timeout_state;
	} TIMEOUT_t;

	extern __IO	uint32_t	ms;


	TIMEOUT_t	init_timeout(uint32_t);

	void		enable_continuous_mode(TIMEOUT_t*);
	void		stop_timeout(TIMEOUT_t*);
	void		start_timeout(TIMEOUT_t*);
	uint8_t		check_timeout(TIMEOUT_t*);

#endif /* TIMER_H_ */


