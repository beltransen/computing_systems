#ifndef INPUTFILEBYWORD_H
#define INPUTFILEBYWORD_H
#include "inputfile.h"

class InputFileByWord : public InputFile
{
public:
    InputFileByWord(const string & name) : InputFile(name){}
    void process();
};

#endif // INPUTFILEBYWORD_H
