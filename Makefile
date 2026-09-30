.PHONY: build clean check upload

all: build

build:
	platformio run

clean:
	platformio run --target clean

check:
	platformio check

upload:
	platformio run --target upload