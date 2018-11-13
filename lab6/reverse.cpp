#include "reverse.h"

Reverse::Reverse(const string & name) : Processor(name){}

void Reverse::process(const string &data){
    if(_output==NULL){
        cout << "["<< _name << "] Cannot process: no output connected" << endl;
    }else{
        Processor::process(data); // Call base class function (check for special command + save the command in the vector)
        string processed_data = "PROCESSED: ";
        for(int i=data.length()-1; i>=0;i--){
            processed_data.push_back(data[i]);
        }
        _output->process(processed_data);
    }
}

void Reverse::process(const string &data, int n){
    if(_output==NULL){
        cout << "["<< _name << "] Cannot process: no output connected" << endl;
    }else{
        Processor::process(data, n); // Call base class function (check for special command + save the command in the vector)
        int last_pos = std::min(n, (int)data.length());
        string processed_data = "PROCESSED: ";
        for(int i=last_pos-1; i>=0;i--){
            processed_data.push_back(data[i]);
        }
        _output->process(processed_data);
    }
}
