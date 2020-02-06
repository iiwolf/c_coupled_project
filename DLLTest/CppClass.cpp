#define DLL_EXPORT extern "C" __declspec(dllexport)
#define CALL_CONV __stdcall
#include "CppClass.h"

DLL_EXPORT CppClass* CALL_CONV CreateCppClass()
{ return new CppClass(); }

DLL_EXPORT void CALL_CONV DestroyCppClass(CppClass* c)
{ delete c; }

DLL_EXPORT float CALL_CONV CppClass_Value_get(CppClass* c)
{ return c ? c->Value : 0.0f; }

DLL_EXPORT void CALL_CONV CppClass_Value_set(CppClass* c, float v)
{ if(c) c->Value = v; }

DLL_EXPORT int CALL_CONV CppClass_Function(CppClass* c)
{ return c ? c->Function() : 0; }
