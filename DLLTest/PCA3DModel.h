#ifdef BUILDING_EXAMPLE_DLL
#define DLL_SPEC __declspec(dllexport)
#else
#define DLL_SPEC __declspec(dllimport)
#endif

// C++
class  PCA3DModel
{
private:
    int weight;

public:
    PCA3DModel(){};
    virtual ~PCA3DModel(){};
    void SetWeight(int weight){}; 
};

extern "C"
{
    PCA3DModel *Internal_CreateNativeObject()
    {
        PCA3DModel *obj = new PCA3DModel();
        // you might want to store the object reference on the native side for tracking
        return nullptr;
    }
    void Internal_DestroyNativeObject(PCA3DModel *obj)
    {
        // may need to update your tracking in native code
        delete obj;
    }
    void Internal_SetWeight(PCA3DModel *obj, int weight)
    {
        obj->SetWeight(weight);
    }
}