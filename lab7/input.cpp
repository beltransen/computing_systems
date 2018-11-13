#include "input.h"

Input::Input(const string & name) : Device(name){
    _processor = NULL;
}

void Input::connectTo(Processor & cpu){
    _processor = &cpu;
}

Processor & Input::operator>>(Processor & p){
    _processor=&p;
    return *_processor;
}

