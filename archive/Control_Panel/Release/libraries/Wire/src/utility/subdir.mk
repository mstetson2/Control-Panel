################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src\utility\twi.c 

C_DEPS += \
.\libraries\Wire\src\utility\twi.c.d 

LINK_OBJ += \
.\libraries\Wire\src\utility\twi.c.o 


# Each subdirectory must supply rules for building sources it contributes
libraries\Wire\src\utility\twi.c.o: C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src\utility\twi.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '


