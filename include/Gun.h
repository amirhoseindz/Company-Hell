#ifndef OOP3_GUN_H
#define OOP3_GUN_H
#include "Enum.h"
class Gun
{
private:
    GunsTypesList _Gun;
    int _NumberOfBullets;
public:
    void SetValue(GunsTypesList GunsType, int NumbersOfBullets);
    bool Existence();
    void Print();
};
#endif //OOP3_GUN_H
