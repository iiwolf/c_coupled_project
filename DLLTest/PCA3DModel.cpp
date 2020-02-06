#include "PCA3DModel.h"

// PCA3DModel::PCA3DModel(){

// }
// PCA3DModel::~PCA3DModel(){
    
// }
// void PCA3DModel::SetWeight(int weight){ this->weight = weight; }

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