//  Write a program of to swap the two values using templates

#include <iostream>
using namespace std;

template <typename T>
T swap(T a, T b)
{
    cout << "before swapping:" << endl;
    cout << a << "\t" << b << endl;
    T temp = a;
    a = b;
    b = temp;
    cout << "after swapping:" << endl;
    cout << a << "\t" << b << endl;
    return a;
}
int main()
{
    swap<int>(8, 9);
    swap<string>("krupali", "yadav");
}
