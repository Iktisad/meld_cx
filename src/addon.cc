#include "functions.h"

using v8::FunctionTemplate;

NAN_MODULE_INIT(InitAll) {

    Nan::Set(target, Nan::New("enumMonitor").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(enumMonitor)).ToLocalChecked());

    Nan::Set(target, Nan::New("reqSleep").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(reqSleep)).ToLocalChecked());
    
    Nan::Set(target, Nan::New("reqAwake").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(reqAwake)).ToLocalChecked());
   
    Nan::Set(target, Nan::New("lastInputTime").ToLocalChecked(),
    Nan::GetFunction(Nan::New<FunctionTemplate>(lastInputTime)).ToLocalChecked());

}

NODE_MODULE(addon, InitAll)