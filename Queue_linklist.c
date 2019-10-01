#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node* Node;

void enq(int ele, Node *rear, Node *front);
void deq(Node *rear, Node *front);
void display(Node rear, Node front);

void main()
{
    int num, choice, e;

    printf("\n 1. Enque");
    printf("\n 2. Deque");
    printf("\n 3. to Display");
    printf("\n 4. to Exit");
    
    Node front, rear;
    front = rear = NULL;
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &num);
            enq(num, &rear, &front);
            break;
        case 2:
            deq(&rear, &front);
            break;
        case 3:
            display();
            break;
       
        case 4:
            exit(0);

       
        default:
            printf("Invalid Input");
            break;
        }
    }
}


// to Enqueue
Node enq(int ele, Node *rear, Node *front)
{
    if (rear == NULL)
    {
        rear = (Node)malloc(sizeof(struct node));
        rear->next = NULL;
        rear->data = ele;
        front = rear;
	return front;
    }
    else
    {
        Node temp=(Node)malloc(sizeof(struct node));
        rear->next = temp;
        temp->data = ele;
        temp->next = NULL;

        rear = temp;
	return &rear;
    }
}

// Displaying the elements of the queue
void display(Node rear, Node front)
{
    Node front1 = front;

    if ((front1 == NULL) && (rear == NULL))
    {
        printf("Queue is empty");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->data);
        front1 = front1->next;
    }
    if (front1 == rear)
        printf("%d", front1->data);
}

// to Dequeue
void deq(Node *rear, Node *front)
{
    Node front1 = front;

    if (front1 == NULL)
    {
        printf("\n Empty Queue");
        return;
    }
    else
        if (front1->next != NULL)
        {
            front1 = front1->next;
            printf("\n Dequed value : %d", front->data);
            free(front);
            front = front1;
        }
        else
        {
            printf("\n Dequed value : %d", front->data);
            free(front);
            front = NULL;
            rear = NULL;
        }
}
