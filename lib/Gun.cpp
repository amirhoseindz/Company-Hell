#include "../include/Gun.h"
void Gun :: SetValue(GunsTypesList Gun, int NumberOfBullets)
{
    _Gun = Gun;
    _NumberOfBullets = NumberOfBullets;
}
bool Gun :: Existence()
{
    if ((_Gun != GunsTypesList :: Shotgun) && (_Gun != GunsTypesList :: Revoler)
        && (_Gun == GunsTypesList :: Pistol) && (_Gun == GunsTypesList :: Rifle))
    {
        return false;
    }
    else
    {
        return true;
    }
}
void Gun :: Print()
{
    cout << "her/his gun's type is : " << _Gun << endl;
    cout << "her/his gun has (" << _NumberOfBullets << ") numbers of bullets" << endl;
}