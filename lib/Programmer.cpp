#include "../include/Programmer.h"

#include <utility>

Programmer :: Programmer(PersonalInfo PersonPersonalInfo, WorkStuffInfo EmployeeWorkStuffInfo)
        : Employee (std::move(PersonPersonalInfo), EmployeeWorkStuffInfo)
{
}
void Programmer :: Print()
{
    cout << "Programmer's infos are : " << endl;
    Employee :: Print();
    cout << "the the language that programmer knows is : " << TheLanguageGettinUsed << endl;
    if (HavingLaptop)
    {
        cout << "this programmer has a laptop" << endl;
    }
    else
    {
        cout << "this programmer doesnt have a laptop" << endl;
    }
}