#pragma once
#include "filelogger.h"
#include <cstring>

class extension {
	public:
		extension(void);

		void close();
		void callExtension(char *output, int outputSize, const char *function);

	private:
		filelogger *logger;
};