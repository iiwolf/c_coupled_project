#define DLL_EXPORT extern "C" __declspec(dllexport)
#define CALL_CONV __stdcall
#include <iostream>
// DLL_EXPORT float CALL_CONV Double(float val);