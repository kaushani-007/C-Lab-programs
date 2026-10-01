#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num, temp, rev = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;
    while (temp > 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    if (rev == num)
        cout << num << " is a palindrome number" << endl;
    else
        cout << num << " is not a palindrome number" << endl;

    system("pause");
    return 0;
}
