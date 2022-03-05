#ifndef SPIF429_H_
#define SPIF429_H_
	#include "stm32f4xx.h"
	#include "gpio_f429.h"

	#define BR_DIV
	#define	BR_DIV2		0x00
	#define	BR_DIV4		0x01
	#define	BR_DIV8		0x02
	#define	BR_DIV16	0x03
	#define	BR_DIV32	0x04
	#define	BR_DIV64	0x05
	#define	BR_DIV128	0x06
	#define	BR_DIV256	0x07


	#define SPI_MODE_0	0
	#define SPI_MODE_1	1
	#define SPI_MODE_2	2
	#define SPI_MODE_3	3

	#define	PA4			4
	#define	PA5			5
	#define	PA6			6
	#define	PA7			7

	#define SPI1_NSS	PA4
	#define SPI1_SCK	PA5
	#define SPI1_MISO	PA6
	#define SPI1_MOSI	PA7

	void	init_spi1(void);

	void	slave_select_off(void);
	void	slave_select_on(void);
	void	spi1_config(void);

	void	spi1_transmit_byte(uint8_t data);
	void	spi1_transmit(uint8_t *data, uint8_t size);
	void	spi1_recieve(uint8_t *data, uint8_t size);


#endif /* SPIF429_H_ */
