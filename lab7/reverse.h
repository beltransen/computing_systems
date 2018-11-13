#ifndef REVERSE_H
#define REVERSE_H
#include "processor.h"
#include <string>
#include <iostream>

class Reverse : public Processor
{
public:
    Reverse(const string & name);
    void process(const string & data);
    void process(const string & data, int n);
};

#endif // REVERSE_H
