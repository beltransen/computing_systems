#ifndef PROCESSOR_H
#define PROCESSOR_H
#include "device.h"
#include "output.h"
#include <iostream>
#include <string>
#include <vector>

class Processor : public Device
{
public:
    Processor(const string & name);
    virtual void process(const string & data);
    virtual void process(const string & data, int n);
    void connectTo(Output & output);
    Output & operator>>(Output & o);
private:
    void showHistory();

protected:
    Output * _output;
    vector<string> _history;
};

#endif // PROCESSOR_H
