#include "WorkStuffInfo.h"
#include <iostream>
using namespace std;
WorkStuffInfo :: WorkStuffInfo ()
= default;
WorkStuffInfo :: WorkStuffInfo (int WorkIdNum, int Salary)
{
    _WorkIdNumber = WorkIdNum;
    ValidateSalary(Salary);
}
bool WorkStuffInfo :: ValidateSalary(int Salary)
{
    try
    {
        if (Salary < 0)
        {
            throw "Salary should be more than 0 ";
        }
        SetSalary(Salary);
    }
    catch (const char * ExceptionText)
    {
        cout << "ERROR" << ExceptionText << endl;
    }
    return false;
}
void WorkStuffInfo :: SetSalary(int Salary)
{
        _Salary = Salary;
}
int WorkStuffInfo :: GetSalary() const
{
    return _Salary;
}
int WorkStuffInfo :: GetWorkIDNum() const
{
    return _WorkIdNumber;
}