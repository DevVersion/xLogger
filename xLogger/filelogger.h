#pragma once
#include <iostream>
#include <fstream>

// IMPORTS FOR DIFF COMPILERS
#ifdef _MSC_VER
#include <windows.h>
#elif __GNUC__ 
#include <sys/stat.h>
#endif

using namespace std;

class filelogger {

	public:
		filelogger(void);

		void log(const char *message);
		void close();

	private:
		ofstream stream;
};