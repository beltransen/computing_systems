#ifndef OUTPUT_H
#define OUTPUT_H
#include "device.h"
#include <iostream>
#include <string>


class Output : public Device
{
public:
    Output(const string & name);
    virtual void process(const string & data)=0;
};

#endif // OUTPUT_H
