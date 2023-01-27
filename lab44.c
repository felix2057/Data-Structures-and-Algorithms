/*Write a program to copy the elements of one stack to another stack without changing
the order.*/
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*start[2];

void push(int data,int i){
    struct node *p;
    p=malloc(sizeof(struct node));
    p->data=data;
    p->next=start[i];
    start[i]=p;
}

int pop(){
    if (start[0]==NULL)
    {
        return;
    }
    int a=start[0]->data;
    struct node *p=start[0];
    start[0]=start[0]->next;
    free(p);
    return a;
}

void copy(){
    if (start[0]==NULL)
    {
        return;
    }
    int a=pop();
    copy();
    push(a,1);
}

void display(int i){
    printf("\n");
    struct node *p=start[i];
    while (p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    int n,data;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    printf("\nEnter data: ");
    while (n--)
    {
        scanf("%d",&data);
        push(data,0);
    }
    display(0);
    copy();
    display(1);
    return 0;
}