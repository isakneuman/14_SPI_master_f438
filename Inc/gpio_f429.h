#ifndef	_GPIO_f429
#define _GPIO_f429

	#include "stm32f4xx.h"

	#define		TWO_BIT				0x02
	#define		FOUR_BIT			0x04

	#define		AF0					0x00
	#define		AF1					0x01
	#define		AF2					0x02
	#define		AF3					0x03
	#define		AF4					0x04
	#define		AF5					0x05
	#define		AF6					0x06
	#define		AF7					0x07
	#define		AF8					0x08
	#define		AF9					0x09
	#define		AF10				0x0A
	#define		AF11				0x0B
	#define		AF12				0x0C
	#define		AF13				0x0D
	#define		AF14				0x0E
	#define		AF15				0x0F

	#define		SECOND_FLOOR		0x10

	#define		ERROR_PORT_DOESNT_CLOCK		0x01
	#define		ERROR_GPIO_DOESNT_INIT		0x02
	#define		ERROR_AFR_DOESNT_SET		0x03

	#define		GPIO_MODE_INPUT		0x00 	// 0b00
	#define		GPIO_MODE_OUTPUT	0x01	// 0b01
	#define		GPIO_MODE_ALTER		0x02	// 0b10
	#define		GPIO_MODE_ANALOG	0x03	// 0b11

	#define		GPIO_OUTPUT_TYPE_PUSHPULL	0
	#define		GPIO_OUTPUT_TYPE_OPENDRAIN	1

	#define		GPIO_SPEED_LOW		0x00 	// 0b00
	#define		GPIO_SPEED_MEDIUM	0x01	// 0b01
	#define		GPIO_SPEED_HIGH		0x02	// 0b10
	#define		GPIO_SPEED_VERYH	0x03	// 0b11

	#define		GPIO_PUPDR_NO		0x00 	// 0b00
	#define		GPIO_PUPDR_PULLUP	0x01	// 0b01
	#define		GPIO_PUPDR_PULLDWN	0x02	// 0b10

	void		toggle_pin( GPIO_TypeDef *PORT,
							uint8_t PIN  );
	void		set_pin( 	GPIO_TypeDef *PORT,
						 	uint8_t PIN  );
	void		reset_pin( 	GPIO_TypeDef *PORT,
						 	uint8_t PIN  );

	uint8_t		init_gpio(	GPIO_TypeDef *PORT,
							uint8_t PIN,
							uint8_t MODE );

	uint8_t		gpio_port_clock(  GPIO_TypeDef *PORT );
	uint8_t		gpio_set_speed(	GPIO_TypeDef *PORT,
								uint8_t PIN,
								uint8_t	SPEED);
	uint8_t		gpio_set_PUPDR(	GPIO_TypeDef *PORT,
								uint8_t PIN,
								uint8_t	PUPDR);
	uint8_t		gpio_set_AFR(	GPIO_TypeDef *PORT,
								uint8_t PIN,
								uint8_t	AF);


#endif
