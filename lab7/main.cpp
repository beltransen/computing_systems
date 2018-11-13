#include <iostream>
#include "display.h"
#include "printer.h"
#include "linekeyboard.h"
#include "charkeyboard.h"
#include "uppercase.h"
#include "reverse.h"
#include "input.h"
#include "outputfile.h"
#include "inputfilebyline.h"
#include "inputfilebyword.h"

using namespace std;

int main()
{
    LineKeyboard lk("Logitech Line");
    Uppercase upper("Intel Uppercase");
    Display display("LG");
    Input *input = &lk;
    lk.connectTo(upper);
    input->connectTo(upper);
    upper.connectTo(display);

    for(int i=0; i<3; i++){ // Process several inputs (to test history command)
        lk.process();
    }

    CharKeyboard ck("Logitech Char");
    Reverse rev("Intel Reverse");
    Printer printer ("Ricoh");
    input=&ck;
    (*input) >> rev >> printer;
    input->process();

    OutputFile of("Output.txt");
    lk >> rev >> of;

    for(int i=0; i<3; i++){ // Process several inputs (to test history command)
        lk.process();
    }
    InputFileByLine ifl("Output.txt");
    ifl >> upper >> display;
    ifl.process();

    InputFileByWord ifw("Output.txt");
    ifw >> rev >> display;
    ifw.process();
    return 0;
}
