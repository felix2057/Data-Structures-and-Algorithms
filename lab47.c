//Write a C program to calculate the length of the longest path of the above tree of previous question
#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *lchild;
    char info;
    struct node *rchild;
};
struct node* newNode(char data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->info = data;
	node->lchild = NULL;
	node->rchild = NULL;

	return (node);
}

int Height(struct node* root)
{
    if (root == NULL)
        return 0;
    else {
        int l = Height(root->lchild);
        int r = Height(root->rchild);
        if (l > r)
            return (l + 1);
        else
            return (r + 1);
    }
}


int main()
{
    struct node* root = newNode('A');
	root->lchild = newNode('B');
	root->rchild = newNode('C');
	root->lchild->lchild = newNode('D');
	root->lchild->rchild = newNode('E');
    root->lchild->rchild->rchild = newNode('F');
    root->rchild->lchild = newNode('G');
    root->rchild->rchild = newNode('H');
    root->rchild->rchild->lchild = newNode('J');
    root->rchild->rchild->lchild->lchild = newNode('L');
    root->rchild->rchild->rchild = newNode('K');
    int h = Height(root);
    printf("Height is %d\n",h);
    return 0;
}