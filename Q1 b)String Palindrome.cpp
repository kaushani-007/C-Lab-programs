#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    char str[100];
    int i, len, flag = 1;

    cout << "Enter a string: ";
    cin >> str;

    len = strlen(str);
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << str << " is a palindrome string" << endl;
    else
        cout << str << " is not a palindrome string" << endl;

    system("pause");
    return 0;
}
