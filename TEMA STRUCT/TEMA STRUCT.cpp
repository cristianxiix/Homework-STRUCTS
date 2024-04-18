#include <iostream>
#include <string>
#include <vector>

struct Contact
{
    std::string contactName;
    std::vector<std::string> info;
    int contactAge;

   void printV(std::vector<std::string> v)
    {
        std::vector<std::string>::iterator it;
        for (it = v.begin(); it != v.end(); it++)
        {
            std::cout << *it << std::endl;
        }
    }
    void AddInfo(std::string x)
    {
        info.push_back(x);
    }
    void SetName(std::string name)
    {
        contactName = name;
    }
    void SetAge(int age)
    {
        contactAge = age;
    }
    void Log()
    {
        std::cout <<
            "Nume: " << contactName << '\n' <<
            "Varsta: " << contactAge << '\n' <<
            "Info: \n"; 
        printV(info);
    }
};
int main()
{
    std::vector<Contact> contacte;
    Contact contact1;
    contact1.AddInfo("viata de artist");
    contact1.AddInfo("hardware & software enthusiast");
    contact1.SetAge(25);
    contact1.SetName("Stefan");
    contacte.push_back(contact1);


    contact1.Log();
    
}
