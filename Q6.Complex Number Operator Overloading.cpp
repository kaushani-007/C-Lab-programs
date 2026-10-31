#include <iostream>
using namespace std;
class Complex
{
   int real, imag;

public:
   Complex(int r = 0, int i = 0)
    {
    real = r;
    imag = i;
    }

 Complex operator++()
    {
    ++real;
    ++imag;
        return *this;
    }
    Complex operator--()
    {
       --real;
       --imag;
       return *this;
    }
 Complex operator+(Complex c)
    {
    return Complex(real + c.real, imag + c.imag);
    }
Complex operator-(Complex c)
    {
       return Complex(real - c.real, imag - c.imag);
    }

  void display()
    {
    cout << real << " + " << imag << "i" << endl;
    }
};
int main()
{
int r1, i1, r2, i2;
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;
    Complex c1(r1, i1), c2(r2, i2), c3;
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
c2.display();
c3 = c1 + c2;
    cout << "Addition: ";
    c3.display();
c3 = c1 - c2;
    cout << "Subtraction: ";
    c3.display();
    ++c1;
    cout << "After incrementing first complex number: ";
    c1.display();
    --c2;
    cout << "After decrementing second complex number: ";
    c2.display();
    return 0;
}
