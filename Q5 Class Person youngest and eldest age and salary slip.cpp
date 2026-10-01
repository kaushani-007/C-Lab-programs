#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Person
{
    char name[64];
    int age;
    char address[64];
    float basic, hra, da, pf, gross, net;

public:
    Person()
    {
        strcpy(name, "");
        age = 0;
        strcpy(address, "");
        basic = hra = da = pf = gross = net = 0;
    }

    Person(char n[], int a, char addr[], float b)
    {
        strcpy(name, n);
        age = a;
        strcpy(address, addr);
        basic = b;
        hra = 0.20 * basic;
        da = 0.50 * basic;
        pf = 0.12 * basic;
        gross = basic + hra + da;
        net = gross - pf;
    }

    int getAge()
    {
        return age;
    }

    void showSlip()
    {
        cout << "-----------------------------------" << endl;
        cout << "Name     : " << name << endl;
        cout << "Age      : " << age << endl;
        cout << "Address  : " << address << endl;
        cout << "Basic    : " << basic << endl;
        cout << "HRA      : " << hra << endl;
        cout << "DA       : " << da << endl;
        cout << "Gross    : " << gross << endl;
        cout << "PF       : " << pf << endl;
        cout << "Net Pay  : " << net << endl;
        cout << "-----------------------------------" << endl;
    }
};

inline int youngestAge(Person p[], int n)
{
    int i, min = p[0].getAge();
    for (i = 1; i < n; i++)
        if (p[i].getAge() < min)
            min = p[i].getAge();
    return min;
}

inline int eldestAge(Person p[], int n)
{
    int i, max = p[0].getAge();
    for (i = 1; i < n; i++)
        if (p[i].getAge() > max)
            max = p[i].getAge();
    return max;
}

int main()
{
    Person p[10];
    int n, i, age;
    char name[64], address[64];
    float basic;

    cout << "How many persons (max 10): ";
    cin >> n;

    if (n < 1 || n > 10)
    {
        cout << "Invalid number" << endl;
        system("pause");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        cout << "\nPerson " << i + 1 << endl;
        cin.ignore();
        cout << "Enter name: ";
        cin.getline(name, 64);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter address: ";
        cin.getline(address, 64);
        cout << "Enter basic salary: ";
        cin >> basic;

        p[i] = Person(name, age, address, basic);
    }

    cout << "\nYoungest age = " << youngestAge(p, n) << endl;
    cout << "Eldest age = " << eldestAge(p, n) << endl;

    cout << "\nSALARY SLIPS" << endl;
    for (i = 0; i < n; i++)
        p[i].showSlip();

    system("pause");
    return 0;
}
