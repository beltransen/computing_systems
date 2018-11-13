#include "uppercase.h"

Uppercase::Uppercase(const string & name) : Processor(name){}

void Uppercase::process(const string & data){
    if(_output==NULL){
        cout << "["<< _name << "] Cannot process: no output connected" << endl;
    }else{
        Processor::process(data); // Call base class function (check for special command + save the command in the vector)
        string processed_data = "PROCESSED: ";
        for(int i=0; i<data.length(); i++){
            processed_data.push_back(std::toupper(data[i]));
        }
        _output->process(processed_data);
    }
}

void Uppercase::process(const string & data, int n){
    if(_output==NULL){
        cout << "["<< _name << "] Cannot process: no output connected" << endl;
    }else{
        Processor::process(data, n); // Call base class function (check for special command + save the command in the vector)
        int last_pos = std::min(n, (int)data.length());
        string processed_data = "PROCESSED: ";
        for(int i=0; i<last_pos; i++){
            processed_data.push_back(std::toupper(data[i]));
        }
        _output->process(processed_data);
    }
}

