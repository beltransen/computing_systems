#include "printer.h"

Printer::Printer(const string & name) : Output(name){}

void Printer::process(const string & data){
    cout << "Printing..." << endl << data << endl;
}
