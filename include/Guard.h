#ifndef OOP3_GUARD_H
#define OOP3_GUARD_H
#include "Employee.h"
#include "Gun.h"
class Guard : public Employee
{
private:
    Gun _GunInHand;
    bool _IsUsingGun;
public:
    void SetGuardsGunObj(Gun gun);
    Guard(PersonalInfo PersonPersonalInfo, WorkStuffInfo EmployeeWorkStuffInfo);
    void Print() override;
};
#endif //OOP3_GUARD_H
