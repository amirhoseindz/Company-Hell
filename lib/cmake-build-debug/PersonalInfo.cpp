#include "PersonalInfo.h"

#include <utility>
PersonalInfo :: PersonalInfo()
= default;
PersonalInfo :: PersonalInfo(const string& FName, const string& LName, int PersonNationalNum)
{
    _PersonNationalIdNumber = PersonNationalNum;
    ValidateFirstName(FName);
    ValidateLastName(LName);
}
bool PersonalInfo :: ValidateFirstName(const string& FName)
{
    try
    {
        if (FName.size() < 3 )
        {
            throw "First name should at least contains 3 characters";
        }
        SetFirstName(FName);
    }
    catch (const char* ExceptionText)
    {
        cout << "ERROR : " << ExceptionText << endl;
    }
    return false;
}
bool PersonalInfo :: ValidateLastName(const string& LName)
{
    try
    {
        if ( LName.size() < 3 )
        {
            throw "Last name should at least contains 3 characters";
        }
        SetLastName(LName);
    }
    catch (const char* ExceptionText)
    {
        cout << "ERROR : " << ExceptionText << endl;
    }
    return false;
}
void PersonalInfo :: SetFirstName(string PersonFName)
{
    _PersonFirstName = std::move(PersonFName);
}
void PersonalInfo :: SetLastName(string PersonLName)
{
    _PersonLastName = std::move(PersonLName);
}
string PersonalInfo :: GetFirstName()
{
    return _PersonFirstName;
}
string PersonalInfo :: GetLastName()
{
    return _PersonLastName;
}
int PersonalInfo :: GetNationalIDNum() const
{
    return _PersonNationalIdNumber;
}