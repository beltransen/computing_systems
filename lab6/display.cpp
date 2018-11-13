#include "display.h"

Display::Display(const string & name) : Output(name){}

void Display::process(const string & data){
    cout << data << endl;
}
