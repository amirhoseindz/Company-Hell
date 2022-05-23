#include <iostream>
#include <vector>
#include "../include/Gun.h"
#include "../include/PersonalInfo.h"
#include "../include/WorkStuffInfo.h"
#include "../include/Artist.h"
#include "../include/Programmer.h"
#include "../include/Guard.h"
using namespace std;
vector<Gun> MakeGunsList(int NumberOfBullets)
{
    vector <Gun> Guns;
    int NumberOfBulletsGunHas = NumberOfBullets;
    for (const auto &gunType : GunsTypesList())
    {
        Gun gunToAdd{};
        gunToAdd.SetValue(gunType, NumberOfBulletsGunHas);
        Guns.push_back(gunToAdd);
    }
    return Guns;
}
int main()
{
    PersonalInfo Artist1PersonalInfo("werwer", "wefdfdf",123);
    WorkStuffInfo Artist1WorkStuffInfo(622, 1220);
    PersonalInfo Artist2PersonalInfo("bfbfg", "gdgdgn",124);
    WorkStuffInfo Artist2WorkStuffInfo(624, 1220);
    Artist Artist1 (Artist1PersonalInfo, Artist1WorkStuffInfo);
    Artist Artist2 (Artist2PersonalInfo, Artist2WorkStuffInfo);
    PersonalInfo Programmer1PersonalInfo("dfwqeqwr", "bfgbrgrg",987);
    WorkStuffInfo Programmer1WorkStuffInfo(222, 1320);
    PersonalInfo Programmer2PersonalInfo("gsefgbaseg", "nththwregwe",984);
    WorkStuffInfo Programmer2WorkStuffInfo(224, 1320);
    Programmer Programmer1 (Programmer1PersonalInfo, Programmer1WorkStuffInfo);
    Programmer Programmer2 (Programmer2PersonalInfo, Programmer2WorkStuffInfo);
    PersonalInfo Guard1PersonalInfo("aqweqwe", "www",52);
    WorkStuffInfo Guard1WorkStuffInfo(619, 1100);
    PersonalInfo Guard2PersonalInfo("eee", "eee",54);
    WorkStuffInfo Guard2WorkStuffInfo(614, 1100);
    Guard Guard1 (Guard1PersonalInfo, Guard1WorkStuffInfo);
    Guard Guard2 (Guard2PersonalInfo, Guard2WorkStuffInfo);
    Artist1.TheSoftwareGettingUsed = "3d";
    Artist2.TheSoftwareGettingUsed = "3d";
    Programmer1.TheLanguageGettinUsed = "cpp";
    Programmer2.TheLanguageGettinUsed= "c#";
    cout << "if this programmer has a laptop enter 1 otherwise enter 0 : " << endl;
    cin >> Programmer1.HavingLaptop;
    bool GuarIsdUsingGun;
    cout << "if this guard  has a gun pleas enter 1 otherwise enter 0 : " << endl;
    cin >> GuarIsdUsingGun;
    vector <Gun> GunsList;
    int NumberOfBulletsGunHas = 32;
    GunsList = MakeGunsList(NumberOfBulletsGunHas);
    if (GuarIsdUsingGun)
    {
        int IndexNumberOfTheGunGuardHasInTheStack = 3;
        Guard1.SetGuardsGunObj((GunsList.at(IndexNumberOfTheGunGuardHasInTheStack)));
        Guard2.SetGuardsGunObj((GunsList.at(IndexNumberOfTheGunGuardHasInTheStack)));
    }
    Employee *Employee1, *Employee2, *Employee3, *Employee4, *Employee5, *Employee6;
    Employee1 = &Artist1;
    Employee2 = &Artist2;
    Employee3 = &Programmer1;
    Employee4 = &Programmer2;
    Employee5 = &Guard1;
    Employee6 = &Guard2;
    vector <Employee*> Employees {Employee1, Employee2, Employee3, Employee4, Employee5, Employee6};
    for (int i = 0; i < Employees.size(); i++)
    {
        Employees.at(i)->Print();
    }
}