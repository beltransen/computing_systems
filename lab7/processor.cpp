#include "processor.h"

Processor::Processor(const string & name) : Device(name){
    _output = NULL;
}

void Processor::process(const string &data){
    string command = "history";
    size_t pos = data.find(command);
    if (pos!=std::string::npos){
        showHistory();
    }
    _history.push_back(data);
}

void Processor::process(const string & data, int n){
    string command = "history";
    size_t pos = data.find(command.c_str(), 0, n-1);
    if (pos!=std::string::npos){
        showHistory();
    }
    _history.push_back(data);
}

void Processor::connectTo(Output & output){
    _output = &output;
}

Output & Processor::operator>>(Output & o){
    _output = &o;
    return *_output;
}

void Processor::showHistory(){
    for(int i=0; i<_history.size(); i++){
        cout << _history[i] << endl;
    }
}
