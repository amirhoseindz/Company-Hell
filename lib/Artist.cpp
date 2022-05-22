#include "Artist.h"

#include <utility>

Artist :: Artist(PersonalInfo PersonPersonalInfo, WorkStuffInfo EmployeeWorkStuffInfo)
        : Employee (std::move(PersonPersonalInfo), EmployeeWorkStuffInfo)
{
}
void Artist :: Print()
{
    cout << "Artist's infos are : " << endl;
    Employee :: Print();
    cout << "the software that artists knows is : " << TheSoftwareGettingUsed << endl;
}