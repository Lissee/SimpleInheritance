#include <iostream>
#include <string>

using namespace std;

class Patient : public Human
{
private:
    string blood_type;
    char gender;


public:
    string GetBloodType()
    {
        return blood_type;
    }
    char GetGender()
    {
        return gender;
    }
};

#ifndef UNTITLED11_PATIENT_H
#define UNTITLED11_PATIENT_H

#endif //UNTITLED11_PATIENT_H
