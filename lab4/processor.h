#ifndef PROCESSOR_H
#define PROCESSOR_H
#include "device.h"
#include "display.h"
#include <iostream>
#include <string>

class Processor : public Device
{
public:
    Processor(const string & name) : Device(name){}
    void process(const string & data);
    void connectTo(Display & display);
private:
    Display * _display;
};

#endif // PROCESSOR_H
