#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    Person();
    Person(string name, int age);
    Person(const Person & p);
    string getName();
    void setName(string name);
    int getAge();
    void setAge(int age);
    Person & operator=(const Person & p);

    // Optional
    void display();
private:
    string _name;
    int _age;
};

#endif // PERSON_H
