//  Write a program of structure employee that provides the following information
// -print and display empno,empname,address and age
#include <stdio.h>
struct Employee
{
    int empNo;
    int age;
    char empName[100];
    char address[100];
} e;

void main()
{
    printf("Enter the employee number:");
    scanf("%d", &e.empNo);

    printf("Enter the employee name:");
    scanf("%s", &e.empName);

    printf("Enter the employee address:");
    scanf("%s", &e.address);

    printf("Enter the employee age:");
    scanf("%d", &e.age);

    printf("\n-----Employee information-----\n");
    printf("\nEmployee number: %d ", e.empNo);
    printf("\nEmployee name: %s ", e.empName);
    printf("\nEmployee address:%s ", e.address);
    printf("\nEmployee age:%d ", e.age);
}