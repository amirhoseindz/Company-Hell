#ifndef OOP3_ARTIST_H
#define OOP3_ARTIST_H
#include "Employee.h"
using namespace std;
class Artist : public Employee
{
public:
    string TheSoftwareGettingUsed;
    Artist(PersonalInfo PersonPersonalInfo, WorkStuffInfo EmployeeWorkStuffInfo);
    void Print() override;
};
#endif //OOP3_ARTIST_H
