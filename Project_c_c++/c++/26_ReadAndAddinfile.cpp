// Write a program to read and write data in to file.
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

    myfile.open("krupali.txt");

    myfile << data;

    myfile.close();

    string data1;

    ifstream readdata;

    readdata.open("krupali.txt");

    getline(readdata, data1);

    cout << endl
         << "Read data from file: " << endl
         << data1;

    readdata.close();
}