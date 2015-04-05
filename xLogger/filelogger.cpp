#include "filelogger.h"

filelogger::filelogger(void) {

#ifdef __GNUC__ 
	mkdir("xlogger", 0777);
#elif _MSC_VER
	CreateDirectory(L"xlogger", NULL);
#endif

	stream.open("xlogger/log.txt", ios_base::app);
}

void filelogger::log(const char *message) {
	cout << "xLogger> " << message << endl;
	stream << "xLogger> " << message << endl;
	stream.flush();
}

void filelogger::close() {
	stream.close();
}