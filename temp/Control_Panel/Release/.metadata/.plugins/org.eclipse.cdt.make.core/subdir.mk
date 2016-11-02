################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
..\.metadata\.plugins\org.eclipse.cdt.make.core\specs.cpp 

C_SRCS += \
..\.metadata\.plugins\org.eclipse.cdt.make.core\specs.c 

C_DEPS += \
.\.metadata\.plugins\org.eclipse.cdt.make.core\specs.c.d 

LINK_OBJ += \
.\.metadata\.plugins\org.eclipse.cdt.make.core\specs.c.o \
.\.metadata\.plugins\org.eclipse.cdt.make.core\specs.cpp.o 

CPP_DEPS += \
.\.metadata\.plugins\org.eclipse.cdt.make.core\specs.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
.metadata\.plugins\org.eclipse.cdt.make.core\specs.c.o: ../.metadata\.plugins\org.eclipse.cdt.make.core/specs.c
	@echo 'Building file: $<'
	@echo 'Starting C compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-gcc" -c -g -Os -std=gnu11 -ffunction-sections -fdata-sections -MMD -flto -fno-fat-lto-objects -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

.metadata\.plugins\org.eclipse.cdt.make.core\specs.cpp.o: ../.metadata\.plugins\org.eclipse.cdt.make.core/specs.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '


