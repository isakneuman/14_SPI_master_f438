#include "dma.h"


/*
 * Stream 2 Channel 4 - USART1_RX
 * Stream 7 Channel 4 - USART1_TX
 */
void	init_dma_stream2_ch4_TX(uint8_t *periph,
								uint8_t *data,
								uint8_t len)
{

	/*Enable DMA clock*/
	SET_BIT(RCC->AHB1ENR,RCC_AHB1ENR_DMA2EN);

	/*Disable curent DMA Stream*/
	CLEAR_BIT(DMA2_Stream7->CR,DMA_SxCR_EN);
	while( DMA2_Stream7->CR	&	DMA_SxCR_EN );

//	LIFCR START
	SET_BIT(DMA2->HIFCR,DMA_HIFCR_CDMEIF7);
	SET_BIT(DMA2->HIFCR,DMA_HIFCR_CFEIF7);
	SET_BIT(DMA2->HIFCR,DMA_HIFCR_CTCIF7);
	SET_BIT(DMA2->HIFCR,DMA_HIFCR_CHTIF7);
	SET_BIT(DMA2->HIFCR,DMA_HIFCR_CTEIF7);
//	LIFCR END

	SET_BIT(DMA2_Stream7->PAR,(uint32_t)periph);
	SET_BIT(DMA2_Stream7->M0AR,(uint32_t)data);
	SET_BIT(DMA2_Stream7->NDTR,len);

	SET_BIT(DMA2_Stream7->CR,DMA_CH_4<<DMA_SxCR_CHSEL_Pos);
	SET_BIT(DMA2_Stream7->CR,DMA_SxCR_MINC);
	SET_BIT(DMA2_Stream7->CR,DMA_SxCR_DIR_0);

	SET_BIT(DMA2_Stream7->CR,DMA_SxCR_TCIE);

	CLEAR_BIT(DMA2_Stream7->FCR,DMA_SxFCR_DMDIS);
	SET_BIT(DMA2_Stream7->CR,DMA_SxCR_EN);

	SET_BIT(USART1->CR3,USART_CR3_DMAT);
	NVIC_EnableIRQ(DMA2_Stream2_IRQn);
}

void	DMA2_Stream2_IRQHandler(void)
{
	if(DMA2->HISR & DMA_HISR_TCIF7)
	{
		SET_BIT(DMA2->HIFCR,DMA_HIFCR_CTCIF7);

	}
}
