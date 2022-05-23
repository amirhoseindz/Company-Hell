#include "../include/Employee.h"

#include <utility>
Employee :: Employee(PersonalInfo PersonPersonalInfo, WorkStuffInfo WorkStuffInfo)
                    : Person(PersonPersonalInfo)
{
    _WorkStuffInfo = WorkStuffInfo;
}
void Employee :: SalaryChanges(int NewSalary)
{
    _WorkStuffInfo.ValidateSalary(NewSalary);
}
void Employee :: Print()
{
    cout << "Employee's work id number is : " << _WorkStuffInfo.GetWorkIDNum() << endl;
    cout << "Employee's salary amount is : " << _WorkStuffInfo.GetSalary() << endl;
    Person :: Print();
}
