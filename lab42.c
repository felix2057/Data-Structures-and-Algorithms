/*Write a menu driven program to implement circular queue operations such as
Enqueue, Dequeue, Peek, Display of elements, IsEmpty, IsFull using linked list.*/
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
typedef struct{
    struct node* front;
    struct node* rear;
} Queue;

void init(Queue *q1){
    q1->front = NULL;
    q1->rear = NULL;
}

int is_empty(Queue *q){
    if(q->rear == NULL){
        return 1;
    }
    else
        return 0;
}

void Enqueue(Queue *q, int val){
    struct node* curr = (struct node*) malloc(sizeof(struct node));
    if(curr == NULL){
        return ;
    }
    curr->data = val;
    curr->next = NULL;
    if(is_empty(q)){
        q->front = q->rear = curr;
    }
    else{
        q->rear->next = curr;
        q->rear = curr;
    }
}

int Dequeue(Queue *q){
    struct node* curr = q->front;
    int x = curr->data;
    if(is_empty(q)){
        return 1;
    }
    else if(q->front == q->rear){
        free(q->front);
        q->rear = NULL;
        q->front = NULL;
    }   
    else{
        q->front = q->front->next;
        free(curr);
    }
    return x;
}
int peek(Queue *q){
    int peek_num ;
    peek_num = q->front->data;
    return peek_num;
}
void display(Queue q){
    struct node* i= q.front;
    for(i; i != NULL; i = i->next){
        printf("%d ", i->data);
    }
    printf("\n");
}
int main(){
    Queue q1;
    init(&q1);

    int n;
    printf("\n1. Enqueue\n2. Dequeue\n3. Check Empty\n4. Peek\n5 Display\n6. Exit\n");
    while(1){
        printf("Enter the action you want to perform on queue:");
        scanf("%d", &n);
        switch(n){
            case 1:
                int x;
                printf("Enter element to insert in queue: ");
                scanf("%d", &x);
                Enqueue(&q1, x);
                display(q1);
                break;
            case 2:
                int y = Dequeue(&q1);
                printf("The deleted element is:  %d\n", y);
                display(q1);
                break;
            case 3:
                if(is_empty(&q1)){
                    printf("Queue is empty\n");
                }
                else{
                    printf("Queue is not empty.\n");
                }
                break;
            case 4:
                int p = peek(&q1);
                printf("The element at front is: %d\n", p);
                break;
            case 5:
                display(q1);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice... Please enter again");
                scanf("%d", &n);
        }

    }
}