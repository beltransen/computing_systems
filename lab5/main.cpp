#include <iostream>
#include "display.h"
#include "printer.h"
#include "linekeyboard.h"
#include "charkeyboard.h"
#include "uppercase.h"
#include "reverse.h"
#include "input.h"

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
    lk.process();

    CharKeyboard ck("Logitech Char");
    Reverse rev("Intel Reverse");
    Printer printer ("Ricoh");
    input=&ck;
    (*input) >> rev >> printer;
    input->process();

    return 0;
}
