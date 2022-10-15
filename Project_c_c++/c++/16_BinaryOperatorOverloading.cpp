// Write a program of Addition, subtraction and multiplication of two numbers using
// Binary Operator overloading with switch case.
#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    A()
    {
    }

    A(int x)
    {
        a = x;
    }

    A operator+(A d1)
    {
        A d2;
        d2.a = a + d1.a;
        cout << a << " + " << d1.a << " = " << d2.a;

        return d2;
    }

    A operator-(A d1)
    {
        A d2;
        d2.a = a - d1.a;
        cout << a << " - " << d1.a << " = " << d2.a;

        return d2;
    }

    A operator*(A d1)
    {
        A d2;
        d2.a = a * d1.a;
        cout << a << " * " << d1.a << " = " << d2.a;

        return d2;
    }
};

int main()
{
    int user_select_no, num1, num2;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    A a(num1);
    A b(num2);

    cout << "1=addition \n 2=substraction\n 3=multiplication\n";
    cout << "Select above no: ";
    cin >> user_select_no;

    switch (user_select_no)
    {
    case 1:
        A c = a + b;
        break;

        // case 2:
        //     A c = a - b;
        //     break;
    }
    // switch (user_select_no)
    // {
    // case 1:
    //     A c = a + b;
    //     break;
    // case 2:
    //     A c1 = a - b;
    //     break;
    // case 3:
    //     A c2 = a * b;
    //     break;

    // default:
    //     cout << "select 1 to 3 number";
    //     break;
    // }
}