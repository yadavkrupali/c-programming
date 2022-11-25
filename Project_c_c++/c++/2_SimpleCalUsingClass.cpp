//  Write a program to Addition, Subtraction, Multiplication, and Division of two numbers using Class
#include <iostream>
using namespace std;
class Calculator
{
private:
    int num1, num2;

public:
    void addition()
    {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
        cout << "\nAddition:" << num1 + num2;
    }

    void substraction()
    {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
        cout << "\nsubstraction:" << num1 - num2;
    }

    void multiplication()
    {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
        cout << "\nmultiplication:" << num1 * num2;
    }

    void Divison()
    {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
        cout << "\nDivison:" << num1 / num2;
    }

    void modulo()
    {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
        cout << "\nmodulo:" << num1 % num2;
    }
};
int main()
{
    Calculator c;
    int user_select_no;
    cout << "1=addition \n 2=substraction\n 3=multiplication\n 4=division\n 5=modulo\n";
    cout << "Select above no: \n";
    cin >> user_select_no;
    switch (user_select_no)
    {
    case 1:
        c.addition();
        break;
    case 2:
        c.substraction();
        break;
    case 3:
        c.multiplication();
        break;
    case 4:
        c.Divison();
        break;
    case 5:
        c.modulo();
        break;

    default:
        cout << "select 1 to 5 number";
        break;
    }
}