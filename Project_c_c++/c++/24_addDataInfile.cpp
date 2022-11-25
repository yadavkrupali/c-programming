// Write a program to add data in text File.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string data;

    cout << "Enter data: ";
    getline(cin, data);

    cout << data;

    ofstream myfile;

    myfile.open("k.txt");

    myfile << data;

    myfile.close();
}