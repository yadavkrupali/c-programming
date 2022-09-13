/*We want to calculate the total marks of each student of a class
 in Physics,Chemistry and Mathematics and the average marks of the class.
The number of students in the class are entered by the user.
 Create a class named Marks with data members for roll number, name and marks.
 Create three other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics,
 which are used to define marks in individual subject of each student.
 Roll number of each student will be generated automatically.*/
#include <iostream>
using namespace std;
class Mraks
{
protected:
    int roll_number, marks;
    string name;

public:
    void setData()
    {
        cout << "Enter student name" << endl;
        cin >> name;
    }
    void getData()
    {
        cout << "Student name :" << name << endl;
    }
};
class Physics : public Mraks
{
protected:
    int marks_of_physics;

public:
    void setMarksPhy()
    {
        cout << "Enter marks of physics" << endl;
        cin >> marks_of_physics;
    }
    void getMarksPhy()
    {
        cout << " marks of physics :" << marks_of_physics << endl;
    }
};
class Chemistry : public Mraks
{
protected:
    int marks_of_chemistry;

public:
    void setMarkschem()
    {
        cout << "Enter marks of Chemistry" << endl;
        cin >> marks_of_chemistry;
    }
    void getMarkschem()
    {
        cout << " marks of Chemistry :" << marks_of_chemistry << endl;
    }
};
class Mathematics : public Mraks
{
protected:
    int marks_of_Mathematics;

public:
    void setMarksmath()
    {
        cout << "Enter marks of Mathematics" << endl;
        cin >> marks_of_Mathematics;
    }
    void getMarksmath()
    {
        cout << " marks of Mathematics :" << marks_of_Mathematics << endl;
    }
};
int main()
{
}