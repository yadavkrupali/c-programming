//  Write a program of Addition of two Matrix using Class.
#include <iostream>
using namespace std;
#define n 2
class Add
{
private:
    int a[n][n] = {{1, 2}, {-4, 6}};
    int b[n][n] = {{7, 8}, {5, 9}};
    int c[n][n];

public:
    void addmatrix()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
};
int main()
{

    Add a;
    a.addmatrix();
}
