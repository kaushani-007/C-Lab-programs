#include <iostream>
#include <cstdlib>
using namespace std;

void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue: a = " << a << ", b = " << b << endl;
}

void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference: a = " << a << ", b = " << b << endl;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before call: x = " << x << ", y = " << y << endl;

    swapByValue(x, y);
    cout << "After call by value: x = " << x << ", y = " << y << endl;

    swapByReference(x, y);
    cout << "After call by reference: x = " << x << ", y = " << y << endl;

    system("pause");
    return 0;
}
