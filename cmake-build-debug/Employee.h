#ifndef OOP3_EMPLOYEE_H
#define OOP3_EMPLOYEE_H
#include "WorkStuffInfo.h"
#include "PersonalInfo.h"
#include "Person.h"
using namespace std;
class Employee : public Person
{
protected:
    WorkStuffInfo _WorkStuffInfo;
    Employee(PersonalInfo PersonPersonalInfo, WorkStuffInfo EmployeeWorkStuffInfo);
public :
    void SalaryChanges(int NewSalary);
    void Print() override;
};
#endif //OOP3_EMPLOYEE_H