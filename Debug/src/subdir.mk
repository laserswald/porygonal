################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Battle.cpp \
../src/BattleOutput.cpp \
../src/Move.cpp \
../src/Pokemon.cpp \
../src/Team.cpp \
../src/Trainer.cpp \
../src/Types.cpp 

OBJS += \
./src/Battle.o \
./src/BattleOutput.o \
./src/Move.o \
./src/Pokemon.o \
./src/Team.o \
./src/Trainer.o \
./src/Types.o 

CPP_DEPS += \
./src/Battle.d \
./src/BattleOutput.d \
./src/Move.d \
./src/Pokemon.d \
./src/Team.d \
./src/Trainer.d \
./src/Types.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/ben/Programming/pokemon-lib/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


