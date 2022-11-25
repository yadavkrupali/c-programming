/*. Describe the structure student having rollno and marks of three subjects of five
students.
-Write a program to print all the information and total marks and percentage of
each student.*/
#include <stdio.h>
#define n 5
struct student
{
    int rollNo, marksOf1Sub, marksOf2Sub, marksOf3Sub, TotalMarks;
    float percentage;
} s[n];

void main()
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the student roll number: ");
        scanf("%d", &s[i].rollNo);

        printf("Enter the marks of 1st subject: ");
        scanf("%d", &s[i].marksOf1Sub);

        printf("Enter the marks of 2nd subject: ");
        scanf("%d", &s[i].marksOf2Sub);

        printf("Enter the marks of 3rd subject: ");
        scanf("%d", &s[i].marksOf3Sub);
    }
    printf("\n------Student_information------\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll number: %d\n", s[i].rollNo);
        printf("1st subject marks: %d\n", s[i].marksOf1Sub);
        printf("2nd subject marks: %d\n", s[i].marksOf2Sub);
        printf("3rd subject marks: %d\n", s[i].marksOf3Sub);
        s[i].TotalMarks = s[i].marksOf1Sub + s[i].marksOf2Sub + s[i].marksOf3Sub;
        printf("Total marks of 3 subjects: %d\n", s[i].TotalMarks);
        s[i].percentage = s[i].TotalMarks / 3;
        printf("Percentage: %f\n", s[i].percentage);
        printf("\n");
    }
}
