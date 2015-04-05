#include "extension.h"

extension *mod;

// UNIX
#ifdef __GNUC__

	static void __attribute__((constructor))
	DllEnable(void) {
		mod = new extension();
	}

	static void __attribute__((destructor))
	DllDisable(void) {
		mod->close();
	}

	extern "C" void RVExtension(char *output, int outputSize, const char *function) {
		mod->callExtension(output, outputSize, function);
	}


#elif _MSC_VER

	BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
		switch ( ul_reason_for_call ) {
		case DLL_PROCESS_ATTACH:
			mod = new extension();
			break;
		case DLL_THREAD_ATTACH:
			break;
		case DLL_THREAD_DETACH:
			break;
		case DLL_PROCESS_DETACH:
			mod->close();
			break;
		}
		return TRUE;
	}

	extern "C" __declspec (dllexport) void __stdcall RVExtension(char *output, int outputSize, const char *function) {
		mod->callExtension(output, outputSize, function);
	}

#endif
		
	