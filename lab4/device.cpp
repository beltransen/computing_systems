#include "device.h"

Device::Device(const string & name){
    _name = name;
}

const string & Device::getName() const{
    return _name;
}
