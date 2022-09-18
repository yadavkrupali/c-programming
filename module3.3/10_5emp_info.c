// WAP of structure employee that provides the following information -print and display
// empno,empname,address,and age
#include <stdio.h>
#define n 5
struct employee_information

{
    int employee_no;
    char employee_name[100];
    char employee_address[100];
    int employee_age;
} e[n];
void main()
{
    for (int i = 0; i < n; i++)
    {

        printf("Enter the employee no:");
        scanf("%d", &e[i].employee_no);

        printf("Enter the employee name:");
        scanf("%s", &e[i].employee_name);

        printf("Enter the employee address:");
        scanf("%s", &e[i].employee_address);

        printf("Enter the employee age:");
        scanf("%d", &e[i].employee_age);
    }

    printf("\n------Employee_information------");
    for (int i = 0; i < n; i++)
    {

        printf("\nEmployee no:%d", e[i].employee_no);
        printf("\nEmployee name:%s", e[i].employee_name);
        printf("\nEmployee address:%s", e[i].employee_address);
        printf("\nEmployee age:%d", e[i].employee_age);
        printf("\n");
    }
}
