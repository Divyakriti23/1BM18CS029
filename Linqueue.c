#include<stdio.h>
#define S 7
void insert(int item,int *r,int q[]);
int delete(int q[],int *f,int *r);
void display(int q[],int r,int f);
//to insert elements
void insert(int item,int *r,int q[])
{
	if(*r==S-1)
	{
		printf("queue overflow\n");
		return;
	}
	q[++(*r)]=item;
}
//to delete elements
int delete(int q[],int *f,int *r)
{
	if(*f>*r)
	{
		printf("Queue underflow\n");
		return -99;
	}
	return q[(*f)++];
}
//to display elements
void display(int q[],int r,int f)
{
	int i;
	if(f>r)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("Contents of queue are :\n");
	for(i=f;i<=r;i++)
		printf(" %d",q[i]);
	printf("\n");
}
int main()
{
	int fr,re,it,x,ch,n,nd,qu[S],i;
	fr=0;
	re=-1;
	printf("\nEnter 1 to insert\n2 to delete\n3 to display\n-1 to exit \n");
	scanf("%d",&ch);
	while(ch!=-1)
	{
		switch(ch)
		{
			case 1: //to insert
				printf("Enter the no.of elements to be inserted \n");
				scanf("%d",&n);
				printf("Enter the elements to be inserted\n");
				for(i=0;i<n;i++)
				{
					scanf("%d",&it);
					insert(it,&re,qu);
				}
				break;

			case 2: //to delete
				printf("Enter the no.of elements to be deleted\n");
				scanf("%d",&nd);
				printf("The deleted elements are\n");
				for(i=0;i<nd;i++)
					printf("%d\n",delete(qu,&fr,&re));
				break;
			case 3: //to delete
				display(qu,re,fr);
				break;
			default: printf("Invalid input\n");
		}
		printf("Enter next choice or -1 to exit\n");
		scanf("%d",&ch);
	}
	return 0;
}
					

