#ifndef DMA_H_
#define DMA_H_

	#include "stm32f4xx.h"

	#define	DMA_CH_4	0x04

	void	write_dma_usart1(uint8_t *data, uint8_t lenght);
	void	init_dma_stream2_ch4_TX(uint8_t *periph, uint8_t *data, uint8_t len);

#endif /* DMA_H_ */
