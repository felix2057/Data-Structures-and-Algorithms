// 1. Write a menu driven program to implement stack using 1-D array to perform
// following operations:
// a) Check if the stack is empty b) Display the contents of stack c) Push d) Pop.
#include <stdio.h>
int stack[100], i, j, choice = 0, n, top = -1;
void push();
void pop();
void show();
void main()
{
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("1.Push\t2.Pop\t3.Show\t4.Exit");
    while (choice != 4)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            show();
            break;
        }
        case 4:
        {
            break;
        }
        default:
        {
            printf("Please Enter valid choice ");
        }
        };
    }
}
void push()
{
    int val;
    if (top == n - 1)
        printf("Overflow");
    else
    {
        printf("Enter the value: ");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}
void pop()
{
    if (top == -1)
        printf("Underflow");
    else
        top = top - 1;
}
void show()
{
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    if (top == -1)
    {
        printf("Stack is empty");
    }
}
