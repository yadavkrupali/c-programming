//  Write a Program to read and write data into file using class Object.
#include <iostream>
#include <fstream>
using namespace std;

class A
{
private:
    string data, data1;

public:
    void add()
    {
        cout << "Enter data: ";
        getline(cin, data);

        cout << data;

        ofstream myfile;

        myfile.open("krupali.txt");

        myfile << data;

        myfile.close();
    }

    void read()
    {
        ifstream readdata;

        readdata.open("krupali.txt");

        getline(readdata, data1);

        cout << endl
             << "Read data from file: " << endl
             << data1;

        readdata.close();
    }
};
int main()
{
    A aa;
    aa.add();
    aa.read();
}