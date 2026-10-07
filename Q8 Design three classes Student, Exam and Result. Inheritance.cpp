#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    int rollNo;
    string name;
public:
    void getStudent()
    {
cout << "Enter roll number: ";
cin >> rollNo;
cin.ignore();
cout << "Enter name: ";
getline(cin, name);
    }
};
class Exam : public Student
{
protected:
 float marks[6];
public:
    void getMarks()
    {
    cout << "Enter marks in 6 subjects:" << endl;
        for(int i = 0; i < 6; i++)
        {
     cout << "Subject " << i + 1 << ": ";
      cin >> marks[i];
        }
    }
};
class Result : public Exam
{
private:
float total;
public:
    void calculate()
    {
        total = 0;
        for(int i = 0; i < 6; i++)
            total += marks[i];
    }
    void display()
    {
        cout << "\nStudent Details" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << total / 6 << endl;
    }
};
int main()
{
    Result r;

    r.getStudent();
    r.getMarks();
    r.calculate();
    r.display();

    return 0;
}
