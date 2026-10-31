#include <iostream>
using namespace std;

class Second;

class First
{
    int a;
public:
    void getData()
    {
        cout << "Enter first number: ";
        cin >> a;
    }

  void display()
    {
        cout << "First number = " << a << endl;
    }
friend void swapNumbers(First &, Second &);
};
class Second
{
    int b;
public:
    void getData()
    {
        cout << "Enter second number: ";
        cin >> b;
    }
    void display()
    {
        cout << "Second number = " << b << endl;
    }
    friend void swapNumbers(First &, Second &);
};
void swapNumbers(First &x, Second &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}
int main()
{
    First obj1;
    Second obj2;
    obj1.getData();
    obj2.getData();
    cout << "\nBefore swapping:" << endl;
    obj1.display();
    obj2.display();
    swapNumbers(obj1, obj2);
    cout << "\nAfter swapping:" << endl;
    obj1.display();
    obj2.display();

    return 0;
}
