#include <iostream>
using namespace std;
class person
{
private:
    int age;
    char name[20];

public:
    void getData()
    {
        cout << "\nEnter person name : ";
        cin >> name;
        cout << "\nEnter person age : ";
        cin >> age;
    }
    void display()
    {
        cout << "\nPerson name : " << name << " and their age is " << age;
    }
};

class account : virtual public person
{
private:
    int pay;

public:
    void getPay()
    {
        cout << "\nEnter pay amount: ";
        cin >> pay;
    }
    void display()
    {
        cout << "\nPay amount: " << pay;
    }
};
class admin : virtual public person
{
private:
    int experience;

public:
    void getExp()
    {
        cout << "\nEnter experience (in years): ";
        cin >> experience;
    }
    void display()
    {
        cout << "\nExperience: " << experience << " years";
    }
};

class master : public admin, public account
{
private:
    char company[100];

public:
    void getCompany()
    {
        cout << "\nENter company name : ";
        cin >> company;
    }
    void display()
    {
        cout << "\nCompany name is " << company;
    }
};

int main()
{
    master obj;
    obj.getData();
    obj.getPay();
    obj.getExp();
    obj.getCompany();

    obj.person::display();
    obj.account::display();
    obj.admin::display();
    obj.display();
}