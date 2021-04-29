#include <iostream>
#include <string>

using namespace std;

class Dudoser : public Student
{
private:
    string nickname = "Dudoser";

public:
    string GetNickname()
    {
        return nickname;
    }
};

#ifndef UNTITLED11_DUDOSER_H
#define UNTITLED11_DUDOSER_H

#endif //UNTITLED11_DUDOSER_H
