.PHONY: build clean check upload docs clean-docs

all: build

build:
	platformio run

clean:
	platformio run --target clean

check:
	platformio check

upload:
	platformio run --target upload

docs:
	doxygen .doxyfile

clean-docs:
	rm -rf docs/html
	rm -rf docs/latex