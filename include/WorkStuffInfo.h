#ifndef OOP3_WORKSTUFFINFO_H
#define OOP3_WORKSTUFFINFO_H
class WorkStuffInfo
{
protected :
    int _WorkIdNumber;
    int _Salary;
public :
    WorkStuffInfo ();
    WorkStuffInfo (int WorkIdNum, int Salary);
    bool ValidateSalary(int Salary);
    void SetSalary(int Salary);
    int GetSalary() const;
    int GetWorkIDNum() const;
};
#endif //OOP3_WORKSTUFFINFO_H
