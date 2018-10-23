#include "display.h"

Display::Display(const string & name) : Device(name){}

void Display::process(const string & data){
    cout << data << endl;
}
