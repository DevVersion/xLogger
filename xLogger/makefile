COMPILER = g++
PARAM = -O3 -m32 -shared

xLogger.so:
	$(COMPILER) $(PARAM) -o xLogger.so *.cpp
	@echo "Successfully compiled the shared object library."
	@echo "Created $@"

clean: 
	rm xLogger.so
	@echo "Successfully deleted xLogger.so"
	@echo "Ready to build again."