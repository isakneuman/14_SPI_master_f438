#ifndef ADC_H_
#define ADC_H_

	#include "stm32f4xx.h"
	#include "gpio_f429.h"
//	#include "stdint.h"


	#define	CHANEL_1	0x01
	#define	CHANEL_2	0x02
	#define	CHANEL_3	0x03
	#define	CHANEL_4	0x04
	#define	CHANEL_5	0x05
	#define	CHANEL_6	0x06
	#define	CHANEL_7	0x07
	#define	CHANEL_8	0x08
	#define	CHANEL_9	0x09
	#define	CHANEL_10	0x0A
	#define	CHANEL_11	0x0B
	#define	CHANEL_12	0x0C
	#define	CHANEL_13	0x0D
	#define	CHANEL_14	0x0E
	#define	CHANEL_15	0x0F
	#define	CHANEL_16	0x10

	#define	SQ_LENGHT_1		0x00
	#define	SQ_LENGHT_2		0x01
	#define	SQ_LENGHT_3		0x02
	#define	SQ_LENGHT_4		0x03
	#define	SQ_LENGHT_5		0x04
	#define	SQ_LENGHT_6		0x05
	#define	SQ_LENGHT_7		0x06
	#define	SQ_LENGHT_8		0x07
	#define	SQ_LENGHT_9		0x08
	#define	SQ_LENGHT_10	0x09
	#define	SQ_LENGHT_11	0x0A
	#define	SQ_LENGHT_12	0x0B
	#define	SQ_LENGHT_13	0x0C
	#define	SQ_LENGHT_14	0x0D
	#define	SQ_LENGHT_15	0x0E
	#define	SQ_LENGHT_16	0x0F

	extern	__IO	int16_t prev_value;
	extern	__IO	int16_t new_value;
	extern	__IO	uint8_t  diff_value;

	void	pf9_adc3_init(void);
	void	start_conversion(void);
	void	stop_conversion(void);
	uint16_t	adc_read(void);

#endif /* ADC_H_ */
