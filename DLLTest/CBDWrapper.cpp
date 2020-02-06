#include "CBDWrapper.h"


DLL_EXPORT float CALL_CONV Double(float val){
    static int counter = 1;
    return val * 2.0f;
}

DLL_EXPORT int CALL_CONV StaticTest(){
    static int counter = 1;
    return counter;
}

DLL_EXPORT void CALL_CONV Works(){
    int i = 1;
}

DLL_EXPORT int CALL_CONV DoesntWork(){
    int i;
    for(i = 0; i < 1000; i++){
        
    }
    return i;
}

