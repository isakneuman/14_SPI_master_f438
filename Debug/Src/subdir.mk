################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/adc.c \
../Src/at45.c \
../Src/dac.c \
../Src/dma.c \
../Src/exti.c \
../Src/gpio_f429.c \
../Src/hc_sr04.c \
../Src/main.c \
../Src/spif429.c \
../Src/stm32f4xx_fmc.c \
../Src/syscalls.c \
../Src/sysmem.c \
../Src/systick.c \
../Src/timer.c \
../Src/uart.c 

OBJS += \
./Src/adc.o \
./Src/at45.o \
./Src/dac.o \
./Src/dma.o \
./Src/exti.o \
./Src/gpio_f429.o \
./Src/hc_sr04.o \
./Src/main.o \
./Src/spif429.o \
./Src/stm32f4xx_fmc.o \
./Src/syscalls.o \
./Src/sysmem.o \
./Src/systick.o \
./Src/timer.o \
./Src/uart.o 

C_DEPS += \
./Src/adc.d \
./Src/at45.d \
./Src/dac.d \
./Src/dma.d \
./Src/exti.d \
./Src/gpio_f429.d \
./Src/hc_sr04.d \
./Src/main.d \
./Src/spif429.d \
./Src/stm32f4xx_fmc.d \
./Src/syscalls.d \
./Src/sysmem.d \
./Src/systick.d \
./Src/timer.d \
./Src/uart.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F429IGTx -DSTM32F429xx -c -I../Inc -I"C:/Users/isakn/Desktop/New folder/stm32lib/CMSIS-429/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

