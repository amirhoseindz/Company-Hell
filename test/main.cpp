#include <iostream>
#include <vector>
#include <limits>
#include "../include/Artist.h"
#include "../include/Programmer.h"
#include "../include/Guard.h"
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
    while (GetInputs)
    {
        int i;
        cout << "Hello, pleas enter the the type of employee u wanna put info's in \n"
             << "in order to do that if u want to put artists info enter 1 \nif u want to put programmers info enter 2 "
                "\nand if u wnt to put guards info please enter 3\nBut if u want to end the process enter 0\n enter your number : ";
        cin >> i;
        if (i == 0)
        {
            GetInputs = false;
            cout << "you have ended the process";
        }
        if (i == 1)
        {
            GetInputs = true;
            string ArtistsFirstName, ArtistsLastName;
            int ArtistsNationalIdNumber, ArtistsWorkIdNumber, ArtistsSalary;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "pleas enter artist's info : "
                 << "\n enter her/his first name : " << endl;
            getline(cin, ArtistsFirstName);
            cout << "now pleas enter her/his last name : " << endl;
            getline(cin, ArtistsLastName);
            cout << "now pleas enter her/his national id number : " << endl;
            cin >> ArtistsNationalIdNumber;
            cout << "now pleas enter her/his work id number : " << endl;
            cin >> ArtistsWorkIdNumber;
            cout << "pleas enter her/his salary : " << endl;
            cin >> ArtistsSalary;
            PersonalInfo ArtistPersonalInfo(ArtistsFirstName, ArtistsLastName,ArtistsNationalIdNumber);
            WorkStuffInfo ArtistWorkStuffInfo(ArtistsWorkIdNumber, ArtistsSalary);
            Artist Artist (ArtistPersonalInfo, ArtistWorkStuffInfo);
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "pleas enter the software that the artist knows : " << endl;
            getline(cin, Artist.TheSoftwareGettingUsed);
            Artist.Print();
            i = -1;
        }
        if (i == 2)
        {
            GetInputs = true;
            string ProgrammersFirstName, ProgrammersLastName;
            int ProgrammersNationalIdNumber, ProgrammersWorkIdNumber, ProgrammersSalary;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "pleas enter programmer's info "
                 << "\n enter her/his first name : " << endl;
            getline(cin, ProgrammersFirstName);
            cout << "now pleas enter her/his last name : " << endl;
            getline(cin, ProgrammersLastName);
            cout << "now pleas enter her/his national id number : " << endl;
            cin >> ProgrammersNationalIdNumber;
            cout << "now pleas enter her/his work id number : " << endl;
            cin >> ProgrammersWorkIdNumber;
            cout << "pleas enter her/his salary : " << endl;
            cin >> ProgrammersSalary;
            PersonalInfo ProgrammerPersonalInfo(ProgrammersFirstName, ProgrammersLastName,ProgrammersNationalIdNumber);
            WorkStuffInfo ProgrammerWorkStuffInfo(ProgrammersWorkIdNumber, ProgrammersSalary);
            Programmer Programmer (ProgrammerPersonalInfo, ProgrammerWorkStuffInfo);
            cout << "pleas enter the language that programmer knows :  " << endl;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(cin, Programmer.TheLanguageGettinUsed);
            cout << "if this programmer has a laptop enter 1 otherwise enter 0 : " << endl;
            cin >> Programmer.HavingLaptop;
            Programmer.Print();
        }
        if (i == 3)
        {
            GetInputs = true;
            string GuardsFirstName, GuardsLastName;
            int GuardsNationalIdNumber, GuardsWorkIdNumber, GuardsSalary;
            bool GuardIsdUsingGun;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "pleas enter guard's info "
                 << "\n enter her/his first name : " << endl;
            getline(cin, GuardsFirstName);
            cout << "now pleas enter her/his last name : " << endl;
            getline(cin, GuardsLastName);
            cout << "now pleas enter her/his national id number : " << endl;
            cin >> GuardsNationalIdNumber;
            cout << "now pleas enter her/his work id number : " << endl;
            cin >> GuardsWorkIdNumber;
            cout << "pleas enter her/his salary : " << endl;
            cin >> GuardsSalary;
            PersonalInfo GuardPersonalInfo(GuardsFirstName, GuardsLastName,GuardsNationalIdNumber);
            WorkStuffInfo GuardWorkStuffInfo(GuardsWorkIdNumber, GuardsSalary);
            Guard Guard (GuardPersonalInfo, GuardWorkStuffInfo);
            cout << "if this guard  has a gun pleas enter 1 otherwise enter 0 : " << endl;
            cin >> GuardIsdUsingGun;
            vector <Gun> GunsList;
            int NumberOfBulletsGunHas = 32;
            GunsList = MakeGunsList(NumberOfBulletsGunHas);
            if (GuardIsdUsingGun)
            {
                int IndexNumberOfTheGunGuardHasInTheStack = 3;
                Guard.SetGuardsGunObj((GunsList.at(IndexNumberOfTheGunGuardHasInTheStack)));
            }
            Guard.Print();
        }
    }
}