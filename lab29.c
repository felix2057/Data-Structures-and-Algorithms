/*Write a menu driven program to perform the following operations in a double linked
list by using suitable user defined functions for each case.
a. Traverse the list forward,
b. Traverse the list backward,
c. Check if the list is empty,
d. Insert a node at the certain position (at beginning/end/any position)
e. Delete a node at the certain position (at beginning/end/any position)
f. Delete a node for the given key,*/
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} *head = NULL, *tail = NULL;
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
        {
            newnode->prev = NULL;
            head = newnode;
            tail = newnode;
        }
        else if (head == tail)
        {
            newnode->prev = head;
            head->next = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
}
void insertNode(int k, int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node = head;
    struct Node *prev = head;
    newnode->data = data;
    for (int i = 1; i < k; i++)
    {
        prev = node;
        node = node->next;
    }
    prev->next = newnode;
    newnode->prev = prev;
    newnode->next = node;
    node->prev = newnode;
}
void addNode(int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = head;
    head = newnode;
    if (tail == NULL)
        tail = newnode;
}
void createNode(int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->prev = tail;
    newnode->next = NULL;
    tail->next = newnode;
    tail = newnode;
    if (head == NULL)
        head = newnode;
}
void deleteNode(int k)
{
    struct Node *temp = head;
    struct Node *node = head;
    if (k == 1)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    else
    {
        for (int i = 1; i < k; i++)
        {
            node = temp;
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            temp->prev->next = NULL;
            tail = temp->prev;
            free(temp);
        }
        else
        {
            temp->next->prev = node;
            node->next = temp->next;
            free(temp);
        }
    }
}
void deleteData(int data)
{
    struct Node *temp = head;
    while (temp->data != data)
        temp = temp->next;
    if (temp == head)
    {
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
    else if (temp->next == NULL)
    {
        temp->prev->next = NULL;
        tail = temp->prev;
        free(temp);
    }
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}
void printNode(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d\t ", n->data);
        n = n->next;
    }
}
void printBack(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d\t ", n->data);
        n = n->prev;
    }
}
int main()
{
    int ch = -1;
    int k = 0, data = 0;
    while (ch != 0)
    {
        printf("\nEnter 0 to exit\nEnter 1 to create list : ");
        printf("\nEnter 2 to insert node in the beginning : ");
        printf("\nEnter 3 to insert node at any position : ");
        printf("\nEnter 4 to insert node at the end : ");
        printf("\nEnter 5 to delete node at any position : ");
        printf("\nEnter 6 to delete any node with a given data : ");
        printf("\nEnter 7 to print list : ");
        printf("\nEnter 8 to traverse backwards : ");
        printf("\nEnter 9 to check if list is empty : ");
        printf("\nCHOICE : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("\n\nEXIT\n\n");
            break;
        case 1:
            printf("\n\n");
            if (head != NULL)
                printf("List is already created\n");
            else
                printf("Enter number of nodes : ");
            scanf("%d", &k);
            createlist(k);
            break;
        case 2:
            printf("\n\n");
            printf("Enter data for the node : ");
            scanf("%d", &data);
            addNode(data);
            break;
        case 3:
            printf("\n\n");
            printf("Enter data for the node : ");
            scanf("%d", &data);
            printf("Enter the position of insertion : ");
            scanf("%d", &k);
            insertNode(k, data);
            break;
        case 4:
            printf("\n\n");
            printf("Enter data for the node : ");
            scanf("%d", &data);
            createNode(data);
            break;
        case 5:
            printf("\n\n");
            printf("Enter the position for deletion : ");
            scanf("%d", &k);
            deleteNode(k);
            break;
        case 6:
            printf("\n\n");
            printf("Enter data for deletion of the node : ");
            scanf("%d", &data);
            deleteData(data);
            break;
        case 7:
            printf("\n\n");
            if (head == NULL)
                printf("List is empty\n");
            else
                printNode(head);
            break;
        case 8:
            printf("\n\n");
            if (head == NULL)
                printf("List is empty\n");
            else
                printBack(tail);
            break;
        case 9:
            printf("\n\n");
            if (head == NULL && tail == NULL)
                printf("List is empty\n");
        default:
            printf("\n\n");
            printf("INVALID CHOICE \n");
            break;
        }
    }
    return 0;
}