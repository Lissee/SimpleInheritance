#include <iostream>
#include <string>

using namespace std;

class Fox : public Gamer
{
private:
    string her_dream = "get a GoodLike";
    string her_nickname;

public:
    string GetHerDream()
    {
        return her_dream;
    }

    string GetHerNickname()
    {
        return her_nickname;
    }
    void SetHerNickname (string SHerNickname)
    {
        her_nickname = SHerNickname;
    }

    void Story()
    {
        cout << "Her nickname is " << her_nickname << " and her dream is " << her_dream << "..." << endl;
    }
};

#ifndef UNTITLED11_FOX_H
#define UNTITLED11_FOX_H

#endif //UNTITLED11_FOX_H
