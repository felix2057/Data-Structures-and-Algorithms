//Write a C Program to print only nodes that has single child
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node * create(){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("Enter the data: ");
    scanf("%d", &x);
    //Base condition i.e if the value of x=-1, the tree will be terminated
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    printf("Enter the left node of %d \n",x);
    newnode->left=create();
    printf("Enter the right node of %d \n",x);
    newnode->right=create();
    return newnode;
}
void Inorder(struct node *root){
    //Base Conditon
    if(root ==0){
        return ;
    }
    Inorder(root->left);
    if (root->left!=NULL&&root->right==NULL || root->left==NULL&&root->right!=NULL)
    {
        printf("%d ",root->data);
    }
    Inorder(root->right);
}
int main(){
    struct node * root=NULL;
    root=create();
    printf("The Nodes having only single child is : ");
    Inorder(root);
    printf("\n");

    
    return 0;
}