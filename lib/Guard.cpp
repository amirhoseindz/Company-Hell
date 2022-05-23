#include "../include/Guard.h"

#include <utility>

void Guard :: SetGuardsGunObj(Gun gun)
{
    _GunInHand = gun;
    if (_GunInHand.Existence())
    {
        _IsUsingGun = true;
    }
    else
    {
        _IsUsingGun = false;
    }
}
Guard :: Guard(PersonalInfo PersonPersonalInfo, WorkStuffInfo EmployeeWorkStuffInfo)
        : Employee (PersonPersonalInfo, EmployeeWorkStuffInfo)
{
}
void Guard :: Print()
{
    cout << "Guard's infos are : " << endl;
    Employee :: Print();
    if (_IsUsingGun)
    {
        cout << "this guard has a gun" << endl;
        _GunInHand.Print();
    }
    else
    {
        cout << "this guard doesnt have a gun" << endl;
    }
}