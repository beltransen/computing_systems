#ifndef OUTPUTFILE_H
#define OUTPUTFILE_H
#include "output.h"
#include <iostream>
#include <algorithm>
#include <fstream>
#include <time.h>

using namespace std;

class OutputFile : public Output
{
public:
    OutputFile(const string & name) : Output(name){}
    void process(const string & data);
};

#endif // OUTPUTFILE_H
