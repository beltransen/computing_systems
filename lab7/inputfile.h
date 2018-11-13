#ifndef INPUTFILE_H
#define INPUTFILE_H
#include "input.h"
#include <iostream>
#include <fstream>

class InputFile : public Input
{
public:
    InputFile(const string & name) : Input(name){}
    void process(const string & data);
};

#endif // INPUTFILE_H
