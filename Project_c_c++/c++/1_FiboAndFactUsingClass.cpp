// Write a program of Fibonacci and factorial using Class
#include <iostream>
using namespace std;
class FiboFact
{
protected:
    int no, i, a = 0, b = 1;

public:
    void fibo()
    {
        int fibo;
        cout << "Enter the no:";
        cin >> no;
        cout << a << "\t";
        cout << b << "\t";

        for (i = 1; i <= no; i++)
        {
            fibo = a + b;
            a = b;
            b = fibo;
            cout << fibo << "\t";
        }
    }

    void fact()
    {
        int fact = 1;
        cout << "\nEnter the no:";
        cin >> no;
        for (int i = 1; i <= no; i++)
        {
            fact = fact * i;
        }
        cout << fact << endl;
    }
};

int main()
{
    FiboFact f;
    f.fibo();
    f.fact();
}