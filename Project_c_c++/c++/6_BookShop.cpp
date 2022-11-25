/*
 Define a class to represent a book shop Include the following members:
Data Member:
 -Name of Author
 -Name of Title
 -Name of Price
 -Name Publisher
Member Functions
 -To Assign Values
 -To Display Values
*/
#include <iostream>
#include <string>
using namespace std;
class A
{
private:
    string author_name, title, publisher;
    int prize;

public:
    void assign_values()
    {
        cout << "Enter Name of Author: ";
        getline(cin, author_name);

        cout
            << "Enter the title name: ";
        getline(cin, title);

        cout << "Enter the Name of Publisher: ";
        getline(cin, publisher);

        cout << "Enter the price: ";
        cin >> prize;
    }

    void display_values()
    {
        cout << endl;
        cout << "-----Display Details-----" << endl;
        cout << "Name of Author: " << author_name << endl;
        cout << "Name of Title: " << title << endl;
        cout << "Price: " << prize << endl;
        cout << "Name Publisher: " << publisher << endl;
    }
};
int main()
{

    A a;
    a.assign_values();
    a.display_values();
}