// WAP to perform reverse of a queue using stack
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top = 0;
struct node *bottom;
struct node *temp;
struct node *newnode;
void enqueue(int x)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = 0;
    if (top == 0)//agar stack khali hai toh
    {
        bottom = temp = newnode;
    }
    else//agar stack bhara hai toh
    {
        temp->link = newnode;
        temp = newnode;
    }
    top = newnode;
}
void display()
{
    temp = bottom;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}
void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = top;
    top = newnode;
}
void reverse()
{
    temp = bottom;
    while (temp != 0)
    {
        push(temp->data);
        temp = temp->link;
    }
}

void displayStack()
{
    temp = top;
    while (temp->link != 0)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}
int main()
{
    int n;
    int x;
    printf("Enter the number of elements in the queue: ");
    scanf("%d", &n);
    printf("Enter the data: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        enqueue(x);
    }
    printf("The queue before reversing : \n");
    display();
    printf("\nThe queue after reversing : \n");
    reverse();
    displayStack();
    printf("\n");
    return 0;
}