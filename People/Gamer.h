#include <iostream>
#include <string>

using namespace std;

class Gamer : public Dudoser
{
private:
    bool Dota_2;
    bool CS_GO;

public:
    bool GetDota_2()
    {
        return Dota_2;
    }
    void SetDota_2 (bool SDota_2)
    {
        Dota_2 = SDota_2;
    }

    bool GetCS_GO()
    {
        return CS_GO;
    }
    void SetCS_GO (bool SCS_GO)
    {
        CS_GO = SCS_GO;
    }
};

#ifndef UNTITLED11_GAMER_H
#define UNTITLED11_GAMER_H

#endif //UNTITLED11_GAMER_H
