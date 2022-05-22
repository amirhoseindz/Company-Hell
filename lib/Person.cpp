#include "Person.h"

#include <utility>
Person :: Person(PersonalInfo PersonPersonalInfo)
{
    _PersonalInfo = std::move(PersonPersonalInfo);
}
void  Person :: PersonalInfoChanges (const string& NewFName, const string& NewLName)
{
    _PersonalInfo.ValidateFirstName(NewFName);
    _PersonalInfo.ValidateLastName(NewLName);
}
void  Person :: Print()
{
    cout << "her/his first name is : " << _PersonalInfo.GetFirstName() << endl;
    cout << "her/his  last name is : " << _PersonalInfo.GetLastName() << endl;
    cout << "her/his  national id number is : " << _PersonalInfo.GetNationalIDNum() << endl;
}