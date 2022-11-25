//  Write a program of to display a matrix using class
#include <iostream>
#define n 2
using namespace std;
class A
{
private:
    int a[n][n];

public:
    void getdata()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "a[" << i << "][" << j << "]= ";
                cin >> a[i][j];
            }
        }
    }

    void displaydata()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j] << endl;
            }
        }
    }
};
int main()
{
    A a;
    a.getdata();
    a.displaydata();
}