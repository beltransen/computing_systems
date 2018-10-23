#include "person.h"

Person::Person()
{
    _name = "";
    _age = 0;
}

Person::Person(string name, int age){

    _name = name;
    _age = age;
}

Person::Person(const Person & p){
    _name = p._name;
    _age = p._age;
}

string Person::getName(){
    return _name;
}

void Person::setName(string name){
    _name = name;
}

int Person::getAge(){
    return _age;
}

void Person::setAge(int age){
    _age = age;
}

Person & Person::operator=(const Person & p){
    _name = p._name;
    _age = p._age;

    return *this;
}

void Person::display(){
    cout << "Name: " << _name << ". Age: " << _age << endl;
}
