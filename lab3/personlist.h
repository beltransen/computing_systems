#ifndef PERSONLIST_H
#define PERSONLIST_H
#include "person.h"
#include <iostream>

using namespace std;

class PersonList
{
public:
    PersonList();
    PersonList(Person * v, int n);
    PersonList(const PersonList & pl);
    ~PersonList();
    void readData();
    void display();
    Person operator[](int i);

private:
    Person * _v;
    int _n;
};

#endif // PERSONLIST_H
