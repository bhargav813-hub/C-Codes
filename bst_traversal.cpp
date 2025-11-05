#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node Node;
Node *newnode(int v) {
	Node *newnode = (Node*)malloc(sizeof(Node));
	newnode->data = v;
	newnode->left = newnode->right = NULL; 
	return newnode;
}
void preorder(Node *root) {
	if(root != NULL) {
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(Node *root) {
	if(root != NULL) {
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}
void postorder(Node *root) {
	if(root != NULL) {
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->data);
	}
}
int main() {
	Node *n1 = newnode(10);
	Node *n2 = newnode(20);
	Node *n3 = newnode(30);
Node *n4 = newnode(40);
	Node *n5 = newnode(50);
	Node *n6 = newnode(60);
Node *n7 = newnode(70);
	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	n3->left = n6;
	n3->right = n7;
	Node *root = n1;
	printf("the preorder travesal\n");
    preorder(root);
    printf("\nthe inorder traversal\n");
    inorder(root);
   	printf("\nthe postorder traversal\n");
    postorder(root);
}