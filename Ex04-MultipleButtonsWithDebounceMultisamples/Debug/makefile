################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := Ex04-MultipleButtonsWithDebounceMultisamples
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Ex04-MultipleButtonsWithDebounceMultisamples.elf \

MAP_FILES += \
Ex04-MultipleButtonsWithDebounceMultisamples.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Ex04-MultipleButtonsWithDebounceMultisamples.list \


# All Target
all: main-build

# Main-build Target
main-build: Ex04-MultipleButtonsWithDebounceMultisamples.elf secondary-outputs

# Tool invocations
Ex04-MultipleButtonsWithDebounceMultisamples.elf Ex04-MultipleButtonsWithDebounceMultisamples.map: $(OBJS) $(USER_OBJS) F:\Embedded\STM32\NUCLEO-L552ZE-Q\Ex04-MultipleButtonsWithDebounceMultisamples\STM32L552ZETXQ_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "Ex04-MultipleButtonsWithDebounceMultisamples.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m33 -T"F:\Embedded\STM32\NUCLEO-L552ZE-Q\Ex04-MultipleButtonsWithDebounceMultisamples\STM32L552ZETXQ_FLASH.ld" --specs=nosys.specs -Wl,-Map="Ex04-MultipleButtonsWithDebounceMultisamples.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Ex04-MultipleButtonsWithDebounceMultisamples.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Ex04-MultipleButtonsWithDebounceMultisamples.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) Ex04-MultipleButtonsWithDebounceMultisamples.elf Ex04-MultipleButtonsWithDebounceMultisamples.list Ex04-MultipleButtonsWithDebounceMultisamples.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
