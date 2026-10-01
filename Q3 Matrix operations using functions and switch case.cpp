#include <iostream>
#include <cstdlib>
using namespace std;

void readMatrix(int m[10][10], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            cin >> m[i][j];
}

void displayMatrix(int m[10][10], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}

void addMatrix(int a[10][10], int b[10][10], int res[10][10], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            res[i][j] = a[i][j] + b[i][j];
}

void subMatrix(int a[10][10], int b[10][10], int res[10][10], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            res[i][j] = a[i][j] - b[i][j];
}

void mulMatrix(int a[10][10], int b[10][10], int res[10][10], int r1, int c1, int c2)
{
    int i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            res[i][j] = 0;
            for (k = 0; k < c1; k++)
                res[i][j] = res[i][j] + a[i][k] * b[k][j];
        }
    }
}

void transposeMatrix(int a[10][10], int res[10][10], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            res[j][i] = a[i][j];
}

int main()
{
    int a[10][10], b[10][10], res[10][10];
    int r1, c1, r2, c2, choice;
    char again;

    do
    {
        cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter rows and columns: ";
                cin >> r1 >> c1;
                cout << "Enter first matrix:" << endl;
                readMatrix(a, r1, c1);
                cout << "Enter second matrix:" << endl;
                readMatrix(b, r1, c1);
                addMatrix(a, b, res, r1, c1);
                cout << "Sum:" << endl;
                displayMatrix(res, r1, c1);
                break;

            case 2:
                cout << "Enter rows and columns: ";
                cin >> r1 >> c1;
                cout << "Enter first matrix:" << endl;
                readMatrix(a, r1, c1);
                cout << "Enter second matrix:" << endl;
                readMatrix(b, r1, c1);
                subMatrix(a, b, res, r1, c1);
                cout << "Difference:" << endl;
                displayMatrix(res, r1, c1);
                break;

            case 3:
                cout << "Enter rows and columns of first matrix: ";
                cin >> r1 >> c1;
                cout << "Enter rows and columns of second matrix: ";
                cin >> r2 >> c2;
                if (c1 != r2)
                {
                    cout << "Multiplication not possible" << endl;
                    break;
                }
                cout << "Enter first matrix:" << endl;
                readMatrix(a, r1, c1);
                cout << "Enter second matrix:" << endl;
                readMatrix(b, r2, c2);
                mulMatrix(a, b, res, r1, c1, c2);
                cout << "Product:" << endl;
                displayMatrix(res, r1, c2);
                break;

            case 4:
                cout << "Enter rows and columns: ";
                cin >> r1 >> c1;
                cout << "Enter matrix:" << endl;
                readMatrix(a, r1, c1);
                transposeMatrix(a, res, r1, c1);
                cout << "Transpose:" << endl;
                displayMatrix(res, c1, r1);
                break;

            case 5:
                break;

            default:
                cout << "Invalid choice" << endl;
        }

        if (choice == 5)
            break;

        cout << "Do you want to continue (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    system("pause");
    return 0;
}
