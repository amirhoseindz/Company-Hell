#ifndef MAIN_CPP_PERSON_H
#define MAIN_CPP_PERSON_H
#include "PersonalInfo.h"
class Person
{
protected :
    PersonalInfo _PersonalInfo;
    Person(PersonalInfo PersonPersonalInfo);
public :
    void PersonalInfoChanges (const string& NewFName, const string& NewLName);

    void virtual Print();
};
#endif