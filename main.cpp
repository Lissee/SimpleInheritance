#include <iostream>
#include <string>
#include "People/Human.h"
#include "People/Student.h"
#include "People/Dudoser.h"
#include "People/Patient.h"
#include "People/Gamer.h"
#include "People/Fox.h"

using namespace std;


int main() {
    const int age = 19;
    string nic;
    Human Heekcabu;

    Heekcabu.SetName("Evelina");
    Heekcabu.SetAge(age);
    Heekcabu.SetGrowth(163);
    Heekcabu.Print();

    Dudoser Borya;

    Borya.SetName ("Boris");
    Borya.SetAge (age);
    Borya.SetGrowth(180);
    Borya.SetGroupNumber(8119);
    cout << "Группа: " << Borya.GetGroupNumber() << endl;
    nic = Borya.GetNickname() + " №1";
    cout << "По жизни: "<< nic << endl;
    Borya.Print();

    Gamer Leshka;

    Leshka.SetName ("Aleksey");
    Leshka.SetAge (age);
    Leshka.SetGrowth (179);
    nic = Leshka.GetNickname() + " №2";
    cout << "По жизни: "<< nic << endl;
    Leshka.SetCS_GO(true);
    if (Leshka.GetCS_GO() == true) {
        cout << "Likes to play CS:GO" <<endl;
    }
    Leshka.Print();

    Fox Liss;

    Liss.SetName("Anastasia");
    Liss.SetAge (age);
    Liss.SetGrowth (163);
    Liss.Print();
    Liss.SetHerNickname("Liss_see");
    Liss.Story();
    if (Liss.GetScholarship() == true) {
        cout << "This fox is studying on a budgetary basis." << endl;
    }
    else { cout << "Not happened (else)" << endl;}





    return 0;
}
