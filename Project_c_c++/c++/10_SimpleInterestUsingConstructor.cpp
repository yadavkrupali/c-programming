/*
Write a program of find the simple interest using constructor with dynamic
initialization. Make constructor like
 Interest (int principal, int year, int year)
 Interest (int principal, int year, float rate = 2.5)

*/

#include <iostream>
using namespace std;
class Interest
{

protected:
    float simple_intrest;

public:
    Interest(int principal, int year, int rate)
    {
        simple_intrest = principal * year * rate / 100;
        cout << "simple_intrest: " << simple_intrest << endl;
        ;
    }

    Interest(int principal, int year, double rate = 2.5)
    {
        simple_intrest = principal * year * rate / 100;
        cout << "simple_intrest: " << simple_intrest << endl;
    }
};

int main()
{
    int principal, year;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the years: ";
    cin >> year;

    // cout << "Enter the intrest rate: ";
    // cin >> rate;

    Interest dc(principal, year, 2);
    Interest pc(principal, year);
}
