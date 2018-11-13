#ifndef DISPLAY_H
#define DISPLAY_H
#include "output.h"
#include <iostream>
#include <string>

class Display : public Output
{
public:
    Display(const string & name);
    void process(const string & data);
};

#endif // DISPLAY_H
