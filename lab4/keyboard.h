#ifndef KEYBOARD_H
#define KEYBOARD_H
#include "device.h"
#include "processor.h"
#include <iostream>
#include <string>

class Keyboard : public Device
{
public:
    Keyboard(const string & name) : Device(name){}
    void process();
    void connectTo(Processor & cpu);
protected:
    Processor* _cpu;
};

#endif // KEYBOARD_H
