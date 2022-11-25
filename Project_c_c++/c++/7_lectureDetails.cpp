/*
Define a class to represent lecture details. Include the following members and the
program should handle at lest details of 5 lecturer

Data members
--Name of the lecturer
--Name of the subject
--Name of course
--num of lectures

Data functions
--To assign initial values
--To add a lecture details
--To display name and lecture details

*/
#include <iostream>
#define n 2
using namespace std;
class A
{
private:
    string lecturer_name, subject_name, course_name;
    int num_of_lectures;

public:
    void assign_values()
    {
        cout << "Enter Name of the subject:";
        cin >> subject_name;

        cout << "Enter Name of the course:";
        cin >> course_name;
    }

    void add_lecture_details()
    {
        cout << "Enter Name of the lecturer:";
        cin >> lecturer_name;

        cout << "Enter numbers of lectures:";
        cin >> num_of_lectures;
    }

    void display_details()
    {
        cout << "Name of the subject: " << subject_name << endl;
        cout << "Name of the course: " << course_name << endl;
        cout << "Name of the lecturer: " << lecturer_name << endl;
        cout << "numbers of lectures: " << num_of_lectures << endl;
    }
};
int main()
{
    A a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Details of lecturer: " << i + 1 << endl;
        a[i].assign_values();
        a[i].add_lecture_details();
    }

    cout << "-------Display Details------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Details of lecturer: " << i + 1 << endl;
        a[i].display_details();
        cout << "\n";
    }
}