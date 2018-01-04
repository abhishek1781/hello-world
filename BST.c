#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newNode(int d)
{
	struct node* node;
	node=(struct node *)malloc(sizeof(struct node));
	node->data=d;
	node->left=NULL;
	node->right=NULL;
	return(node);
}
void preorder(struct node* node){
	if(node==NULL)
	return;
	printf("%d",node->data);
	preorder(node->left);
	preorder(node->right);
}
void inorder(struct node* node){
	if(node==NULL)
	return;
	inorder(node->left);
	printf("%d",node->data);
	inorder(node->right);
}
void postorder(struct node* node){
	if(node==NULL)
	return;
	postorder(node->left);
	postorder(node->right);
	printf("%d",node->data);
	}
int main()
{
	struct node* root;
	root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	root->left->left->left=newNode(6);
	root->left->left->right=newNode(7);
	
	printf("preorder traversal of binary tree is \n");
	preorder(root);
	printf("\ninorder traversal of binary tree is \n");
	inorder(root);
	printf("\npostorder traversal of binary tree is \n");
	postorder(root);
	getch();
	
}
