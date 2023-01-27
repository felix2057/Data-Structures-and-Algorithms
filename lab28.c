/*Write a menu driven program to perform the following operations in a singly linked
list by using suitable user defined functions for each case.
a. Create a linked list
b. Traverse the list,
c. Insert a node at the certain position (at beginning/end/any position)
d. Delete a node at the certain position (at beginning/end/any position)
e. Count the total number of nodes,
f. Search for an element in the linked list.
g. Reverse the linked list.*/
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *head = NULL;
void createlist(int k)
{
    printf("Enter values for the nodes : \n");
    for (int i = 0; i < k; i++)
    {
        int data;
        scanf("%d", &data);
        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
        newnode->data = data;
        newnode->next = NULL;
        if (head == NULL)
            head = newnode;
        else
        {
            struct Node *last = head;
            while (last->next != NULL)
            {
                last = last->next;
            }
            last->next = newnode;
        }
    }
}
void createNode(int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
        head = newnode;
    else
    {
        struct Node *last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = newnode;
    }
}
void addNode(int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}
void insertNode(int data, int k)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *prev = NULL;
    if (k == 0)
        addNode(data);
    else
    {
        for (int i = 1; i <= k; i++)
        {
            if (prev == NULL)
                prev = head;
            else
                prev = prev->next;
        }
        newnode->data = data;
        newnode->next = prev->next;
        prev->next = newnode;
    }
}
void deleteNode(int k)
{
    struct Node *prev = head;
    struct Node *node = head;
    if (k == 1)
    {
        head = head->next;
    }
    else
    {
        for (int i = 1; i < k; i++)
        {
            prev = node;
            node = node->next;
        }
        prev->next = node->next;
    }
}
void searchNode(int data)
{
    struct Node *node = head;
    int c = 0;
    while (node != NULL)
    {
        c++;
        if (node->data == data)
        {
            printf("Node found at %d position\n", c);
        }
        node = node->next;
    }
}
void countNode()
{
    struct Node *node = head;
    int c = 0;
    while (node != NULL)
    {
        c++;
        node = node->next;
    }
    printf("The number of nodes = %d\n", c);
}
void reverse()
{
    struct Node *node = head;
    struct Node *prev = NULL;
    struct Node *next = head;
    while (node != NULL)
    {
        next = next->next;
        node->next = prev;
        prev = node;
        node = next;
    }
    head = prev;
}
void printNode(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d\t ", n->data);
        n = n->next;
    }
}
int main()
{
    int ch, k, n;
    while (ch != 0)
    {
        printf("\n\nEnter 0 to exit : ");
        printf("\nEnter 1 to create list : ");
        printf("\nEnter 2 to display the list : ");
        printf("\nEnter 3 to insert a node at the beginning of the list : ");
        printf("\nEnter 4 to insert a node at the end of the list : ");
        printf("\nEnter 5 to insert a node after the kth node : ");
        printf("\nEnter 6 to delete a node at the kth position : ");
        printf("\nEnter 7 to search for a node in the linked list : ");
        printf("\nEnter 8 to count the total number of nodes : ");
        printf("\nEnter 9 to reverse the linkedlist : ");
        printf("\nCHOICE : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("EXIT\n");
            break;
        case 1:
            if (head != NULL)
            {
                printf("List is already created\n");
            }
            else
            {
                printf("Enter number of nodes you want to create in the list : ");
                scanf("%d", &k);
                createlist(k);
            }
            break;
        case 2:
            printNode(head);
            break;
        case 3:
            printf("Enter value of new node : ");
            scanf("%d", &n);
            addNode(n);
            break;
        case 4:
            printf("Enter value of new node : ");
            scanf("%d", &n);
            createNode(n);
            break;
        case 5:
            printf("Enter value of new node : ");
            scanf("%d", &n);
            printf("After which node should the new node be inserted : ");
            scanf("%d", &k);
            insertNode(n, k);
            break;
        case 6:
            printf("Enter the position for deletion of node : ");
            scanf("%d", &k);
            deleteNode(k);
            break;
        case 7:
            printf("Enter the value of node to be searched for : ");
            scanf("%d", &n);
            searchNode(n);
            break;
        case 8:
            countNode();
            break;
        case 9:
            reverse();
            break;
        default:
            printf("INVALID CHOICE");
        }
    }
    return 0;
}