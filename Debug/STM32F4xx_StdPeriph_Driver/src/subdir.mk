################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../STM32F4xx_StdPeriph_Driver/src/misc.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_adc.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_can.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_cec.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_crc.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_cryp_aes.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_cryp_des.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_cryp_tdes.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dac.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dbgmcu.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dcmi.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dfsdm.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dma.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dma2d.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dsi.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_exti.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_flash.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_fmc.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_fmpi2c.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_gpio.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_i2c.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_iwdg.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_lptim.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_ltdc.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_pwr.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_qspi.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_rcc.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_rng.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_rtc.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_sai.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_sdio.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_spdifrx.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_spi.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_syscfg.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_tim.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_usart.c \
../STM32F4xx_StdPeriph_Driver/src/stm32f4xx_wwdg.c 

OBJS += \
./STM32F4xx_StdPeriph_Driver/src/misc.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_adc.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_can.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_cec.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_crc.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_cryp_aes.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_cryp_des.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_cryp_tdes.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dac.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dbgmcu.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dcmi.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dfsdm.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dma.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dma2d.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dsi.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_exti.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_flash.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_fmc.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_fmpi2c.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_gpio.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_i2c.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_iwdg.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_lptim.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_ltdc.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_pwr.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_qspi.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_rcc.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_rng.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_rtc.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_sai.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_sdio.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_spdifrx.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_spi.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_syscfg.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_tim.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_usart.o \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_wwdg.o 

C_DEPS += \
./STM32F4xx_StdPeriph_Driver/src/misc.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_adc.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_can.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_cec.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_crc.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_cryp_aes.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_cryp_des.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_cryp_tdes.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dac.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dbgmcu.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dcmi.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dfsdm.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dma.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dma2d.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_dsi.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_exti.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_flash.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_fmc.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_fmpi2c.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_gpio.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_i2c.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_iwdg.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_lptim.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_ltdc.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_pwr.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_qspi.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_rcc.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_rng.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_rtc.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_sai.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_sdio.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_spdifrx.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_spi.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_syscfg.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_tim.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_usart.d \
./STM32F4xx_StdPeriph_Driver/src/stm32f4xx_wwdg.d 


# Each subdirectory must supply rules for building sources it contributes
STM32F4xx_StdPeriph_Driver/src/%.o: ../STM32F4xx_StdPeriph_Driver/src/%.c STM32F4xx_StdPeriph_Driver/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F429IGTx -DSTM32F429xx -DSTM32F429_439xx -c -I../Inc -I"C:/Users/isakn/Desktop/New folder/stm32lib/CMSIS-429/Include" -I"Q:/stm32courselearn/14_SPI_master_f438/STM32F4xx_StdPeriph_Driver/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

