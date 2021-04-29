#include <iostream>
#include <string>

using namespace std;

class Student : public Human
{
private:
    int group_number;
    int number;
    bool scholarship = true;

public:
    bool GetScholarship()
    {
        return scholarship;
    }

    void SetNumber (int SNumber)
    {
        number = SNumber;
    }

    int GetGroupNumber ()
    {
        return group_number;
    };
    void SetGroupNumber (int GroupNumber)
    {
        group_number = GroupNumber;
    }
};

#ifndef UNTITLED11_STUDENT_H
#define UNTITLED11_STUDENT_H

#endif //UNTITLED11_STUDENT_H
