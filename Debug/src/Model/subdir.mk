################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Model/ArrayNode.cpp \
../src/Model/CTECArray.cpp \
../src/Model/Node.cpp 

OBJS += \
./src/Model/ArrayNode.o \
./src/Model/CTECArray.o \
./src/Model/Node.o 

CPP_DEPS += \
./src/Model/ArrayNode.d \
./src/Model/CTECArray.d \
./src/Model/Node.d 


# Each subdirectory must supply rules for building sources it contributes
src/Model/%.o: ../src/Model/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


