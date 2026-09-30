.PHONY: docs clean-docs

docs:
	doxygen .doxyfile

clean-docs:
	rm -rf docs/html
	rm -rf docs/latex