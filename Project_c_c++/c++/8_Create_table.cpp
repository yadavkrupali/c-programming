/*
Write a program of to display in this format using class
RollNo  Sub1  Sub2  Sub3  Total  Percentage
1        30    25     45   100
2        25    20     25    70
3        20    15     35    70
4        35    30     40    105

*/
#include <iostream>
#define n 4
using namespace std;

class A
{
private:
    int RollNo, Sub1, Sub2, Sub3, Total, Percentage;

public:
    void GetData()
    {
        cout << "Roll number: ";
        cin >> RollNo;

        cout << "Marks of subject 1st: ";
        cin >> Sub1;

        cout << "Marks of subject 2nd: ";
        cin >> Sub2;

        cout << "Marks of subject 3rd: ";
        cin >> Sub3;

        Total = Sub1 + Sub2 + Sub3;
        Percentage = Total / 3;
    }

    void SetData()
    {
        cout << RollNo << "\t" << Sub1 << "\t" << Sub2 << "\t" << Sub3 << "\t" << Total << "\t" << Percentage << endl;
    }
};

int main()
{
    A a[n];

    for (int i = 0; i < n; i++)
    {
        a[i].GetData();
    }
    cout << endl;
    cout << "RollNo\tSub1\tSub2\tSub3\tTotal\tPercentage" << endl;
    for (int i = 0; i < n; i++)
    {
        a[i].SetData();
    }
}