// Write a C program that:
// a. Uses Structure to store name, roll no., marks, and address of 5 students in C
// programming subject;
// b. Displays the stored information.
#include <stdio.h>
#include <string.h>
struct student{
    char name[10];
    int roll_no;
    int marks;
    char address[30];
};
int main()
{
    struct student s1,s2,s3,s4,s5;
    s1.roll_no = 100;
    s1.marks = 34;
    strcpy(s1.name, "Boris");
    strcpy(s1.address, "India");

    s2.roll_no = 737;
    s2.marks = 57;
    strcpy(s2.name, "Michael");
    strcpy(s2.address, "USA");
    
    s3.roll_no = 813;
    s3.marks = 29;
    strcpy(s3.name, "John");
    strcpy(s3.address, "Japan");

    s4.roll_no = 263;
    s4.marks = 45;
    strcpy(s4.name, "Trevor");
    strcpy(s4.address, "Brazil");

    s5.roll_no = 428;
    s5.marks = 82;
    strcpy(s5.name, "Puneet");
    strcpy(s5.address, "China");

    printf("The details of student 1: \n");
    printf("Rollno: %d\n", s1.roll_no);
    printf("Marks: %d\n", s1.marks);
    printf("Name: %s\n", s1.name);
    printf("Address: %s\n", s1.address);
    printf("******************\n");

    printf("The details of student 2: \n");
    printf("Rollno: %d\n", s2.roll_no);
    printf("Marks: %d\n", s2.marks);
    printf("Name: %s\n", s2.name);
    printf("Address: %s\n", s2.address);
    printf("******************\n");

    printf("The details of student 3: \n");
    printf("Rollno: %d\n", s3.roll_no);
    printf("Marks: %d\n", s3.marks);
    printf("Name: %s\n", s3.name);
    printf("Address: %s\n", s3.address);
    printf("******************\n");

    printf("The details of student 4: \n");
    printf("Rollno: %d\n", s4.roll_no);
    printf("Marks: %d\n", s4.marks);
    printf("Name: %s\n", s4.name);
    printf("Address: %s\n", s4.address);
    printf("******************\n");

    printf("The details of student 5: \n");
    printf("Rollno: %d\n", s5.roll_no);
    printf("Marks: %d\n", s5.marks);
    printf("Name: %s\n", s5.name);
    printf("Address: %s\n", s5.address);
    printf("******************");
    
    return 0;
}