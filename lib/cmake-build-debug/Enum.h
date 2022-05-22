#ifndef OOP3_ENUM_H
#define OOP3_ENUM_H
#include <iostream>
using namespace std;
enum class GunsTypesList : char
{
    Shotgun = 0,
    Revoler,
    Pistol,
    Rifle,
    First = Shotgun,
    Last = Rifle
};
ostream& operator << (ostream& out, GunsTypesList Gun );
inline GunsTypesList operator++(GunsTypesList &x);
GunsTypesList operator*(GunsTypesList c);
GunsTypesList begin([[maybe_unused]] GunsTypesList r);
GunsTypesList end([[maybe_unused]] GunsTypesList r);
#endif