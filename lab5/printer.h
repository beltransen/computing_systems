#ifndef PRINTER_H
#define PRINTER_H
#include "output.h"
#include <iostream>
#include <string>

class Printer : public Output
{
public:
    Printer(const string & name);
    void process(const string & data);
};

#endif // PRINTER_H
