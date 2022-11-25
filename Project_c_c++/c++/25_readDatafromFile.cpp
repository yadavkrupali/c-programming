// Write a program to read data from text file.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    string data1;

    ifstream readdata;

    readdata.open("k.txt");

    getline(readdata, data1);

    cout << endl
         << "Read data from file: " << endl
         << data1;

    readdata.close();
}