################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
INO_SRCS += \
..\Control_Panel.ino \
..\Engine-LCD.ino \
..\Engine-Loops.ino \
..\Engine-Serial_Messages.ino \
..\Engine.ino \
..\Operations-Director.ino \
..\Operations-Error_Handler.ino \
..\Operations-Stop_Listener.ino \
..\Operations-Type_1.ino \
..\Operations-Type_2.ino \
..\Operations-Type_3.ino \
..\Settings-Functions_Select.ino \
..\Startup-Director.ino \
..\Startup-Methods.ino 

CPP_SRCS += \
..\.ino.cpp 

LINK_OBJ += \
.\.ino.cpp.o 

INO_DEPS += \
.\Control_Panel.ino.d \
.\Engine-LCD.ino.d \
.\Engine-Loops.ino.d \
.\Engine-Serial_Messages.ino.d \
.\Engine.ino.d \
.\Operations-Director.ino.d \
.\Operations-Error_Handler.ino.d \
.\Operations-Stop_Listener.ino.d \
.\Operations-Type_1.ino.d \
.\Operations-Type_2.ino.d \
.\Operations-Type_3.ino.d \
.\Settings-Functions_Select.ino.d \
.\Startup-Director.ino.d \
.\Startup-Methods.ino.d 

CPP_DEPS += \
.\.ino.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
.ino.cpp.o: ../.ino.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Control_Panel.o: ../Control_Panel.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Engine-LCD.o: ../Engine-LCD.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Engine-Loops.o: ../Engine-Loops.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Engine-Serial_Messages.o: ../Engine-Serial_Messages.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Engine.o: ../Engine.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Operations-Director.o: ../Operations-Director.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Operations-Error_Handler.o: ../Operations-Error_Handler.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Operations-Stop_Listener.o: ../Operations-Stop_Listener.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Operations-Type_1.o: ../Operations-Type_1.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Operations-Type_2.o: ../Operations-Type_2.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Operations-Type_3.o: ../Operations-Type_3.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Settings-Functions_Select.o: ../Settings-Functions_Select.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Startup-Director.o: ../Startup-Director.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Startup-Methods.o: ../Startup-Methods.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire\src" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '


