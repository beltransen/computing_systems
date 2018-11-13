#ifndef INPUT_H
#define INPUT_H
#include "device.h"
#include "processor.h"
#include <iostream>
#include <string>


class Input : public Device
{
public:
    Input(const string & name);
    virtual void process()=0;
    void connectTo(Processor & cpu);
    Processor & operator>>(Processor & p);

protected:
    Processor* _processor;

};

#endif // INPUT_H
