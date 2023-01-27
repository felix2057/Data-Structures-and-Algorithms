//Write a program in C to store employee’s data such as employee name, gender,
//designation, department, basic pay. Calculate the gross pay of each employees as
//follows:
//Gross pay = basic pay + HR + DA
//HR=25% of basic and DA=75% of basic.
#include <stdio.h>
struct employee
{
    int id;
    char name[50];
    char gender[6];
    char designation[10];
    char department[10];
    float age;
    float bs;
    float gs;
};
int main()
{
    int n;
    float da, hra;
    printf("Enter number of employee : ");
    scanf("%d", &n);
    struct employee s[n];
    struct employee *emp;
    emp = &s[0];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name of employee : ");
        scanf(" %[^\n]", (emp + i)->name);
        printf("Enter the gender of employee : ");
        scanf(" %[^\n]", (emp + i)->gender);
        printf("Enter the designation of employee : ");
        scanf(" %[^\n]", (emp + i)->designation);
        printf("Enter the department of employee : ");
        scanf(" %[^\n]", (emp + i)->department);
        printf("Enter gross salary of employee : ");
        scanf("%f", &(emp + i)->bs);
        da = 0.75 * ((emp + i)->bs);
        hra = 0.25 * ((emp + i)->bs);
        (emp + i)->gs = (emp + i)->bs + da + hra;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:\t", i + 1);
        printf("Name : %s\t", (emp + i)->name);
        printf("Gender : %s\t", (emp + i)->gender);
        printf("Designation : %s\t", (emp + i)->designation);
        printf("Department : %s\t", (emp + i)->department);
        printf("Basic Salary : %0.2f\t", (emp + i)->bs);
        printf("Gross Salary : %0.2f\t", (emp + i)->gs);
        printf("\n");
    }
    return 0;
}