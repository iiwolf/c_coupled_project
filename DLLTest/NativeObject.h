#ifdef BUILDING_EXAMPLE_DLL
#define DLL_SPEC __declspec(dllexport)
#else
#define DLL_SPEC __declspec(dllimport)
#endif

 
 // C++
class DLL_SPEC NativeObject
{
public:
        NativeObject();
        virtual ~NativeObject();   
        void SomeNativeMethod(int someParameter);        
};

// C++:
extern "C" DLL_SPEC NativeObject* CreateTestClass()
{
    return new NativeObject();
}

extern "C" DLL_SPEC void DisposeTestClass(NativeObject* pObject)
{
    delete pObject;
    // if(pObject != NULL)
    // {
    //     delete pObject;
    //     pObject = NULL;
    // }
}

// C++
// extern "C"
// {

//     __declspec(dllexport) NativeObject *Internal_CreateNativeObject()
//     {
//         NativeObject *obj = new NativeObject();
//         // you might want to store the object reference on the native side for tracking
//         return obj;
//     }
//     void __declspec(dllexport) Internal_DestroyNativeObject(NativeObject *obj)
//     {
//         // may need to update your tracking in native code
//         delete obj;
//     }
//     void __declspec(dllexport) Internal_SomeNativeMethod(NativeObject *obj, int SomeParameter)
//     {
//         obj->SomeNativeMethod(SomeParameter);
//     }
// }