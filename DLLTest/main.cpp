#include <iostream>
#define DLL __declspec(dllexport)
#define STD __stdcall

// Define a C# compatible function with argument int
typedef int(STD* ANSWERCB)(int);
static ANSWERCB call_back;

extern "C"
{
	DLL int GetRandom() {
		return rand();
	}

	DLL int TakesCallback(ANSWERCB function_pointer, int n)
	{
		call_back = function_pointer;

		// If a valid function pointer was passed, call it with argument
		if (call_back)
		{
			while (call_back(n) == 0) {
				n++;
			}
		}
		return 0;
	}
}
