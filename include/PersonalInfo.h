#ifndef OOP3_PERSONALINFO_H
#define OOP3_PERSONALINFO_H
#include <iostream>
using namespace std;
class PersonalInfo
{
protected :
    string _PersonFirstName;
    string _PersonLastName;
    int _PersonNationalIdNumber;
public :
    PersonalInfo();
    PersonalInfo(const string& FName, const string& LName, int NationalNum);
    bool ValidateFirstName(const string& FName);
    bool ValidateLastName(const string& LName);
    void SetFirstName(string FName);
    string GetFirstName();
    void SetLastName(string LName);
    string GetLastName();
    [[nodiscard]] int GetNationalIDNum() const;
};
#endif //OOP3_PERSONALINFO_H
