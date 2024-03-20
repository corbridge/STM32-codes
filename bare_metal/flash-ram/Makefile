CFLAGS  ?=  -W -Wall -Wextra -Werror -Wundef -Wshadow -Wdouble-promotion \
            -Wformat-truncation -fno-common -Wconversion \
            -g3 -Os -ffunction-sections -fdata-sections -I. \
            -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 $(EXTRA_CFLAGS)
LDFLAGS ?= -Tlink.ld -nostartfiles -nostdlib --specs nano.specs -lc -lgcc -Wl,--gc-sections -Wl,-Map=$@.map
SOURCES = main.c 
BUILD_DIR = build

%.o: %.bin %.elf %.elf.map  # Matches all .c files and creates corresponding .o files
	$(CC) $(CFLAGS) -o $(BUILD_DIR)/$@ $<  # Compile and place the output in build/

ifeq ($(OS),Windows_NT)
  RM = cmd /C del /Q /F
else
  RM = rm -f
endif

build: firmware.bin

firmware.elf: $(SOURCES)
	arm-none-eabi-gcc $(SOURCES) $(CFLAGS) $(LDFLAGS) -o $(BUILD_DIR)/$@

firmware.bin: firmware.elf
	arm-none-eabi-objcopy -O binary $(BUILD_DIR)/$< $(BUILD_DIR)/$@

flash: firmware.bin
	st-flash --reset write $(BUILD_DIR)/$< 0x8000000

clean:
	$(RM) firmware.*