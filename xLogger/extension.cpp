#include "extension.h"

extension::extension(void) {
	logger = new filelogger();

	logger->log("Enabled xLogger C++ Extension by PaulGap");
}

void extension::close() {
	logger->log("Disabled xLogger C++ Extension by PaulGap");
}

void extension::callExtension(char *output, int outputSize, const char *function) {
	logger->log(function);

	strcpy(output, function);
}