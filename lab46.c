//Write three different functions in C to perform inorder, preorder and postorder traversal
//to the above created binary tree
#include <stdio.h>
#include <stdlib.h>

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node {
	char data;
	struct node* left;
	struct node* right;
};

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node* newNode(char data)
{
	struct node* node
		= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node)
{
	if (node == NULL)
		return;

	/* first recur on left child */
	printInorder(node->left);

	/* then print the data of node */
	printf("%c ", node->data);

	/* now recur on right child */
	printInorder(node->right);
}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node)
{
    if (node == NULL)
        return;
 
    /* first print data of node */
    printf("%c ", node->data);
 
    /* then recur on left subtree */
    printPreorder(node->left);
 
    /* now recur on right subtree */
    printPreorder(node->right);
}

void printPostorder(struct node* node)
{
    if (node == NULL)
        return;
 
    // first recur on left subtree
    printPostorder(node->left);
 
    // then recur on right subtree
    printPostorder(node->right);
 
    // now deal with the node
    printf("%c ", node->data);
}

/* Driver code*/
int main()
{
	struct node* root = newNode('A');
	root->left = newNode('B');
	root->right = newNode('C');
	root->left->left = newNode('D');
	root->left->right = newNode('E');
    root->left->right->right = newNode('F');
    root->right->left = newNode('G');
    root->right->right = newNode('H');
    root->right->right->left = newNode('J');
    root->right->right->left->left = newNode('L');
    root->right->right->right = newNode('K');


	// Function call
	printf("\nInorder traversal of binary tree is \n");
	printInorder(root);

    printf("\nPostorder traversal of binary tree is \n");
	printPostorder(root);

    printf("\nPreorder traversal of binary tree is \n");
	printPreorder(root);

    printf("\n");

	return 0;
}