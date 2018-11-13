#ifndef UPPERCASE_H
#define UPPERCASE_H
#include "processor.h"
#include <string>
#include <iostream>

class Uppercase : public Processor
{
public:
    Uppercase(const string & name);
    void process(const string & data);
    void process(const string & data, int n);
};

#endif // UPPERCASE_H
