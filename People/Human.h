#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
    string name;
    int age, growth;

public:

    void SetName( string SName)
    {
        name = SName;
    };

    void SetAge( int SAge)
    {
        age = SAge;
    };

    void SetGrowth( int SGrowth)
    {
        growth = SGrowth;
    };

    void Print()
    {
        cout << "Имя: " << name << "\nВозраст: " << age << "\nРост: " << growth << endl << endl;
        cout << "----------------------------------" << endl << endl;
    }


};

#ifndef UNTITLED11_HUMAN_H
#define UNTITLED11_HUMAN_H

#endif //UNTITLED11_HUMAN_H
