################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
INO_SRCS += \
..\Control_Panel.ino \
..\Engine-LCD.ino \
..\Engine-Loops.ino \
..\Engine-Serial_Messages.ino \
..\Engine-Wire_Connection.ino \
..\Engine.ino \
..\Operations-Backend.ino \
..\Operations-Director.ino \
..\Operations-Error_Handler.ino \
..\Operations-Stop_Controller.ino \
..\Operations-Type_1.ino \
..\Operations-Vars.ino \
..\Settings-Functions_Select.ino \
..\Startup-Director.ino \
..\Startup-Methods.ino \
..\eEngine-Memory.ino 

CPP_SRCS += \
..\.ino.cpp 

LINK_OBJ += \
.\.ino.cpp.o 

INO_DEPS += \
.\Control_Panel.ino.d \
.\Engine-LCD.ino.d \
.\Engine-Loops.ino.d \
.\Engine-Serial_Messages.ino.d \
.\Engine-Wire_Connection.ino.d \
.\Engine.ino.d \
.\Operations-Backend.ino.d \
.\Operations-Director.ino.d \
.\Operations-Error_Handler.ino.d \
.\Operations-Stop_Controller.ino.d \
.\Operations-Type_1.ino.d \
.\Operations-Vars.ino.d \
.\Settings-Functions_Select.ino.d \
.\Startup-Director.ino.d \
.\Startup-Methods.ino.d \
.\eEngine-Memory.ino.d 

CPP_DEPS += \
.\.ino.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
.ino.cpp.o: ../.ino.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Control_Panel.o: ../Control_Panel.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Engine-LCD.o: ../Engine-LCD.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Engine-Loops.o: ../Engine-Loops.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Engine-Serial_Messages.o: ../Engine-Serial_Messages.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Engine-Wire_Connection.o: ../Engine-Wire_Connection.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Engine.o: ../Engine.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Operations-Backend.o: ../Operations-Backend.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Operations-Director.o: ../Operations-Director.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Operations-Error_Handler.o: ../Operations-Error_Handler.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Operations-Stop_Controller.o: ../Operations-Stop_Controller.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Operations-Type_1.o: ../Operations-Type_1.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Operations-Vars.o: ../Operations-Vars.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Settings-Functions_Select.o: ../Settings-Functions_Select.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Startup-Director.o: ../Startup-Director.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

Startup-Methods.o: ../Startup-Methods.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '

eEngine-Memory.o: ../eEngine-Memory.ino
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\dev\Programs\sloeber\arduinoPlugin\tools\arduino\avr-gcc\4.9.2-atmel3.5.3-arduino2/bin/avr-g++" -c -g -Os -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -MMD -flto -mmcu=atmega2560 -DF_CPU=16000000L -DARDUINO=10609 -DARDUINO_AVR_MEGA2560 -DARDUINO_ARCH_AVR   -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\cores\arduino" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\variants\mega" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\Wire" -I"C:\dev\Programs\sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.6.13\libraries\SoftwareSerial" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<" -o "$@"  -Wall
	@echo 'Finished building: $<'
	@echo ' '


