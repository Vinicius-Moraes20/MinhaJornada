################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32L4xx_HAL_Driver/Src/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
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


BUILD_ARTIFACT_NAME := Projeto03 - Programando a BP
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
Projeto03\ -\ Programando\ a\ BP.elf \

MAP_FILES += \
Projeto03\ -\ Programando\ a\ BP.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
Projeto03\ -\ Programando\ a\ BP.list \

OBJCOPY_HEX += \
Projeto03\ -\ Programando\ a\ BP.hex \

OBJCOPY_BIN += \
Projeto03\ -\ Programando\ a\ BP.bin \


# All Target
all: main-build

# Main-build Target
main-build: Projeto03\ -\ Programando\ a\ BP.elf secondary-outputs

# Tool invocations
Projeto03\ -\ Programando\ a\ BP.elf Projeto03\ -\ Programando\ a\ BP.map: $(OBJS) $(USER_OBJS) C:\Users\vinicius.pereira\Documents\GitHub\MinhaJornada\Curso\ STM32\ -\ Gabriel\ Vigiano\Projeto03\ -\ Programando\ a\ BP\STM32L476RGTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "Projeto03 - Programando a BP.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\vinicius.pereira\Documents\GitHub\MinhaJornada\Curso STM32 - Gabriel Vigiano\Projeto03 - Programando a BP\STM32L476RGTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="Projeto03 - Programando a BP.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

Projeto03\ -\ Programando\ a\ BP.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "Projeto03 - Programando a BP.list"
	@echo 'Finished building: $@'
	@echo ' '

Projeto03\ -\ Programando\ a\ BP.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "Projeto03 - Programando a BP.hex"
	@echo 'Finished building: $@'
	@echo ' '

Projeto03\ -\ Programando\ a\ BP.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "Projeto03 - Programando a BP.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) Projeto03\ -\ Programando\ a\ BP.bin Projeto03\ -\ Programando\ a\ BP.elf Projeto03\ -\ Programando\ a\ BP.hex Projeto03\ -\ Programando\ a\ BP.list Projeto03\ -\ Programando\ a\ BP.map Projeto03\\ -\\ Programando\\ a\\ BP.elf default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
