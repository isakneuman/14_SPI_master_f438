#include "stm32f4xx.h"
#include "uart.h"
#include "systick.h"
#include "gpio_f429.h"
#include "at45.h"
#include "spif429.h"
#include "timer.h"

#define PIN_	12

void print_new(uint8_t* data);

int main(void)
{

//	system_init_HSI_PLL(PLLP2, 160, 8, FLASH_ACR_LATENCY_5WS);

//	SysTick_Config(SYS_FREQ/1000);
	init_gpio(GPIOD,PIN_,GPIO_MODE_OUTPUT);


	while(1)
	{
		set_pin(GPIOD,PIN_);
		for(uint32_t i = 0; i<1e5;i++);
		reset_pin(GPIOD,PIN_);
		for(uint32_t i = 0; i<1e5;i++);
	}
}






