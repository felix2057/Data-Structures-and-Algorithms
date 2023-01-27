// 2. WAP a menu driven program to perform the following operations of a stack using
// linked list by using suitable user defined functions for each case.
// a) Check if the stack is empty b) Display the contents of stack c) Push d) Pop.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * top;
void push()
{
    int data;
    scanf("%d", &data);
    if (top == NULL)
    {
        top = (struct node *)malloc(sizeof(struct node));
        top->data = data;
        top->next = NULL;
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = top;
        top = temp;
    }
}
void pop()
{
    struct node *temp = top;
    if (temp == NULL)
    {
        display();
    }
    else
    {
        temp = temp->next;
        free(top);
        top = temp;
        printf("Popped\n");
    }
}
void display()
{
    struct node *q = top;
    if (q == NULL)
    {
        printf("The stack is empty");
    }
    else
    {
        printf("The stack is:\n");
        while (q != NULL)
        {
            printf("%d\n", q->data);
            q = q->next;
        }
        printf("\n");
    }
}
int main()
{
    int s = 0;
    printf("Make your choice\n1.Push\t2.Pop\t3.Display\t4.Exit: ");
    while (s != 4)
    {
        scanf("%d", &s);
        switch (s)
        {
        case 1:
            int n;
            printf("Enter the number of elements: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                push();
            }
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("Good Day\n");
            break;
        }
    }
}