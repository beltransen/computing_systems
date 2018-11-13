#include "processor.h"

Processor::Processor(const string & name) : Device(name){
    _output = NULL;
}

void Processor::process(const string &data){
    string command = "quit";
    size_t pos = data.find(command);
    if (pos!=std::string::npos){
        cout << "Special command found" << endl;
    }
}

void Processor::process(const string & data, int n){
    string command = "quit";
    size_t pos = data.find(command.c_str(), 0, n-1);
    if (pos!=std::string::npos){
        cout << "Special command found" << endl;
    }
}

void Processor::connectTo(Output & output){
    _output = &output;
}


Output & Processor::operator>>(Output & o){
    _output = &o;
    return *_output;
}
