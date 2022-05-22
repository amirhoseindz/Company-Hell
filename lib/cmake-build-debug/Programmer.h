#ifndef OOP3_PROGRAMMER_H
#define OOP3_PROGRAMMER_H
#include "Employee.h"
using namespace std;
class Programmer : public Employee
{
public:
    string TheLanguageGettinUsed;
    bool HavingLaptop;
    Programmer(PersonalInfo PersonPersonalInfo, WorkStuffInfo EmployeeWorkStuffInfo);
    void Print() override;
};
#endif //OOP3_PROGRAMMER_H
