#include <iostream>
#include <limits>
#include "../include/Artist.h"
#include "../include/Programmer.h"
#include "../include/Guard.h"
#include "../lib/MyVector.cpp"
using namespace std;
vector<Gun> MakeGunsList(int NumberOfBullets)
{
    vector <Gun> Guns;
    int NumberOfBulletsGunHas = NumberOfBullets;
    for (const auto &gunType : GunsTypesList())
    {
        Gun gunToAdd{};
        gunToAdd.SetValue(gunType, NumberOfBulletsGunHas);
        Guns.push_back(gunToAdd);
    }
    return Guns;
}
int main()
{
    bool GetInputs = true;
    MyVector <Employee*> employees;
    Employee *employee;
    string EmployeesFirstName, EmployeesLastName;
    int EmployeesNationalIdNumber, EmployeesWorkIdNumber, EmployeesSalary;
    while (GetInputs)
    {
        int i;
        cout << "\nHello, pleas enter the the type of employee u wanna put info's in \n"
             << "in order to do that if u want to put artists info enter 1 \nif u want to put programmers info enter 2 "
                "\nand if u wnt to put guards info please enter 3\nBut if u want to end the process enter 0"
                "\n enter your number : ";
        cin >> i;
        if (i == 0)
        {
            GetInputs = false;
            cout << "you have ended the process" << endl;
        }
        else
         {
            cout << "pleas enter employee's info : "
                 << "\n enter her/his first name : " << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(cin, EmployeesFirstName);
            cout << "now pleas enter her/his last name : " << endl;
            getline(cin, EmployeesLastName);
            cout << "now pleas enter her/his national id number : " << endl;
            cin >> EmployeesNationalIdNumber;
            cout << "now pleas enter her/his work id number : " << endl;
            cin >> EmployeesWorkIdNumber;
            cout << "pleas enter her/his salary : " << endl;
            cin >> EmployeesSalary;
            PersonalInfo PersonalInfo(EmployeesFirstName, EmployeesLastName, EmployeesNationalIdNumber);
            WorkStuffInfo WorkStuffInfo(EmployeesWorkIdNumber, EmployeesSalary);
             if (i == 1)
             {
                 auto* artist = new Artist (PersonalInfo, WorkStuffInfo);
                 cin.clear();
                 cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                 cout << "pleas enter the software that the artist knows : " << endl;
                 getline(cin, artist->TheSoftwareGettingUsed);
                 employee = artist;
             }
             if (i == 2)
             {
                 auto* programmer = new Programmer (PersonalInfo, WorkStuffInfo);
                 cin.clear();
                 cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                 cout << "pleas enter the language that programmer knows :  " << endl;
                 getline(cin, programmer->TheLanguageGettingUsed);
                 cout << "if this programmer has a laptop enter 1 otherwise enter 0 : " << endl;
                 cin >> programmer->HavingLaptop;
                 employee = programmer;
             }
             if (i == 3)
             {
                 auto* guard = new Guard (PersonalInfo, WorkStuffInfo);
                 bool GuardIsdUsingGun;
                 cout << "if this guard  has a gun pleas enter 1 otherwise enter 0 : " << endl;
                 cin >> GuardIsdUsingGun;
                 vector <Gun> GunsList;
                 int NumberOfBulletsGunHas = 32;
                 GunsList = MakeGunsList(NumberOfBulletsGunHas);
                 if (GuardIsdUsingGun)
                 {
                     int IndexNumberOfTheGunGuardHasInTheStack = 3;
                     guard->SetGuardsGunObj((GunsList.at(IndexNumberOfTheGunGuardHasInTheStack)));
                 }
                 employee = guard;
             }
             employees.PushBack(employee);
        }
        int IndexNumber;
        IndexNumber = employees.FindIndex(employee);
        if (IndexNumber >= 0 )
        {
            cout << "the number of each indexes in employees list are : " << IndexNumber << endl;
        }
        else
        {
            cout << "Element not found" << endl;
        }
    }
    for (int i = 0; i < employees.GenericVector.size(); i++)
    {
        employees.GenericVector.at(i)->Print();
    }
}