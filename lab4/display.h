#ifndef DISPLAY_H
#define DISPLAY_H
#include "device.h"
#include <iostream>
#include <string>

class Display : public Device
{
public:
    Display(const string & name);
    void process(const string & data);
};

#endif // DISPLAY_H
