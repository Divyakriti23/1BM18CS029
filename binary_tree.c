#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *lchild;
	struct node *rchild;
};
typedef struct node *Node;
Node insert(Node root, int item);
void display(Node root);
Node getnode(int item);
void inorder(Node root);
void preorder(Node root);
void postorder(Node root);
int main()
{
	int ele, ch, n, i;
	Node root = NULL;
	printf("1. Insert\n 2. Inorder\n 3. Preorder\n 4.Postorder\n 0. Exit\n");
	scanf("%d", &ch);
	while(ch!=0)
	{
		switch(ch)
		{
			case 1: printf("Enter no of elements\n");
				scanf("%d", &n);
				printf("Enter the element\n");
				for(i=0; i<n; i++)
				{
					scanf("%d", &ele);
					root=insert(root, ele);
				}
				break;
			case 2: inorder(root);	
				break;
			case 3: preorder(root);
				break;
			case 4: postorder(root);
				break;
		}
	printf("1. Insert\n 2.Inorder\n 3. Preorder\n 4. Postorder\n");
	scanf("%d", &ch);
	}
}
void inorder(Node root)
{
	if(root==NULL)
	return;
	inorder(root->lchild);
	printf("%d\n", root->data);
	inorder(root->rchild);
}
void preorder(Node root)
{
	if(root==NULL)
	return;
	printf("%d\n", root->data);
	preorder(root->lchild);
	preorder(root->rchild);
}
void postorder(Node root)
{
	if(root==NULL)
	return;
	postorder(root->lchild);
	postorder(root->rchild);
	printf("%d\n", root->data);
}
Node insert(Node root, int item)
{
	if(root==NULL)	
	return getnode(item);
	if(item<root->data)
	root->lchild=insert(root->lchild, item);
	else if(item>root->data)
	root->rchild=insert(root->rchild, item);
	return root;
}
Node getnode(int item)
{
	Node p;
	p=(Node)malloc(sizeof(struct node));
	p->data=item;
	p->lchild=NULL;
	p->rchild=NULL;
	return p;
}

