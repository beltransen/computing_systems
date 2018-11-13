#ifndef INPUTFILEBYLINE_H
#define INPUTFILEBYLINE_H
#include "inputfile.h"

class InputFileByLine : public InputFile
{
public:
    InputFileByLine(const string & name) : InputFile(name){}
    void process();
};

#endif // INPUTFILEBYLINE_H
