#ifndef SYSTICK_H_
#define SYSTICK_H_

	#include	"stm32f4xx.h"
	#include 	"adc.h"
//	#define	SYS_FREQ168		168
//	#define	SYS_FREQ84		84
//	#define	SYS_FREQ72		72
	#define	SYS_FREQ16		16
//	#define	SYS_FREQ160		160


	#ifdef	SYS_FREQ168
		#define	SYS_FREQ	168000000
	#elif	SYS_FREQ160
		#define	SYS_FREQ	160000000
		#define	APB2_FREQ	80000000
	#elif	SYS_FREQ84
		#define	SYS_FREQ	84000000
	#elif	SYS_FREQ72
		#define	SYS_FREQ	72000000
	#elif	SYS_FREQ16
		#define	SYS_FREQ	16000000
		#define	APB2_FREQ	SYS_FREQ
	#endif


	#define		AHB_DIV2	0x04
	#define		AHB_DIV4	0x05
	#define		AHB_DIV8	0x06
	#define		AHB_DIV16	0x07


	#define		ERROR_HSION_DOSNT_READY		0x01
	#define		ERROR_PLL_DOSNT_READY		0x02
	#define		ERROR_PLLSW_DOESNT_READY	0x03
	#define		ERROR_SYSTICK_CONFIG		0x04;

	#define		TIMEOUT_value	0x1000 // 4096

	#define		SM_400SECTIME	23323

	#define		SW_HSI	0x00
	#define		SW_HSE	0x01
	#define		SW_PLL	0x02

	#define		PLLP2	0x00
	#define		PLLP4	0x01
	#define		PLLP6	0x02
	#define		PLLP8	0x03

	#define		HSISRC	0x00

/*
 * PLL_out = ( f_in*N/M )/P
 */
	uint8_t	system_init_HSI_PLL(uint8_t PLLP,
								uint16_t PLLN,
								uint8_t PLLM,
								uint8_t LATENCY);

#endif /* SYSTICK_H_ */
















