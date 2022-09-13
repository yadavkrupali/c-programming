// total marks of each student of a class
#include <iostream>

using namespace std;
class Physics
{
protected:
    int marks_of_physics;
};
class Chemistry
{
protected:
    int marks_of_chemistry;
};
class Mathematics
{
protected:
    int marks_of_mathe;
};

class Marks : public Physics, public Chemistry, public Mathematics
{
private:
    int roll_no, marks;
    string name;
    float avrage;

public:
    void setdetails(int rollNo, string name1, int marksOfPhysics, int marksOfChemistry, int marksOfMath)
    {
        roll_no = rollNo;
        name = name1;
        marks_of_physics = marksOfPhysics;
        marks_of_chemistry = marksOfChemistry;
        marks_of_mathe = marksOfMath;

        marks = marks_of_physics + marks_of_chemistry + marks_of_mathe;
        avrage = marks / 3;
    }
    void printdetails()
    {
        cout << "Student roll number :" << roll_no << endl;
        cout << "Student name  :" << name << endl;
        cout << "Student's marks of physics  :" << marks_of_physics << endl;
        cout << "Student's marks of chemistry  :" << marks_of_chemistry << endl;
        cout << "Student's marks of math  :" << marks_of_mathe << endl;
        cout << "student's total marks :" << marks << endl;
        cout << "student's avrage of marks :" << avrage << endl;
        cout << endl;
    }
};
int main()
{
    int total_of_student, marks_of_physics, marks_of_chemistry, marks_of_mathe;
    string name;
    cout << "Enter the total numbers of student" << endl;
    cin >> total_of_student;

    Marks m[total_of_student];
    for (int i = 0; i < total_of_student; i++)
    {
        cout << "Enter the student name:" << endl;
        cin >> name;

        cout << "Enter the marks of physics" << endl;
        cin >> marks_of_physics;

        cout << "Enter the marks of chemistry" << endl;
        cin >> marks_of_chemistry;

        cout << "Enter the marks of math" << endl;
        cin >> marks_of_mathe;

        m[i].setdetails(i + 1, name, marks_of_physics, marks_of_chemistry, marks_of_mathe);
    }

    for (int j = 0; j < total_of_student; j++)
    {
        m[j].printdetails();
    }
}
