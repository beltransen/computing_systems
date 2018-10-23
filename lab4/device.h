#ifndef DEVICE_H
#define DEVICE_H
#include <iostream>
#include <string>

using namespace std;

class Device
{
public:
    Device(const string & name);
    const string & getName() const;

private:
    string _name;
};

#endif // DEVICE_H
