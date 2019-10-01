#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node* Node;

Node push(int data, Node top);
Node pop(Node top);
void display(Node top);

void main()
{
	int num, choice, e;
	printf(" Enter your choice:");
	printf("\n 1.to Push");
	printf("\n 2.to Pop");
	printf("\n 3.to Display");
	printf("\n 4.to Exit");

	Node top = NULL;
	while (1)
	{
		printf("\n Enter choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:printf(" Enter data : ");
			       scanf("%d", &num);
			       top = push(num, top);
			       break;
			case 2:top = pop(top);
			       break;
			case 3:display(top);
			       break;
			case 4:  exit(0);
			default :printf("Invalid Input");
				 break;
		}
	}	
}

//to Push
Node push(int ele, Node top)
{
    if (top == NULL)
    {
        top =(Node)malloc(sizeof(struct node));
        top->next = NULL;
        top->data = ele;
	return top;
    }
    else
    {
        Node temp =(Node)malloc(sizeof(struct node));
        temp->next = top;
        temp->data = ele;
        top = temp;
	return top;
    }
}

//to Display
void display(Node top)
{
    Node t = top;

    if (t == NULL)
    {
        printf("Stack is empty");
        return;
    }
    printf(" Elements in the stack are:\n");
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
 }

//to Pop
Node pop(Node top)
{
    Node t = top;

    if (t == NULL)
    {
        printf("\nStack underflow");
        return top;
    }
    else
        t = t->next;
    printf("\n Popped element : %d", top->data);
    free(top);
    top = t;
    return top;
}

