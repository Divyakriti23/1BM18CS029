#include<stdio.h>
#include<conio.h>
void display(int s[100], int t);
void push(int e, int s[100], int *t);
void pop(int s[100], int *t);
int main()
{
int stack[100], top = -1;
int x;
push(1, stack, &top);
push(2, stack, &top);
display(stack, top);
x = pop(stack, &top);
if(x!==-9999)
{
printf("poped out element is %d", x);
}
else
{
printf("Stack is empty");
}
display(stack, top);
getch();
return 0;
}
void push(int e, int s[100], int *t)
{
if(*t==99)
{
printf("Stack overflow\n");
return;
}
*t = *t+1;
s[*t]=e;
void display(int s[100], int t)
{
int i;
if(t==-1)
{
printf("Stack is empty\n");
return;
}}
for(int i=t; i>=0; i--)
{
printf("%d\n", s[i]);
}
int pop(int s[100], int *t)
{
int e;
if(*t==-1)
{
printf("Stack overflow\n");
return -9999;
}
e = s[*t];
*t = *t-1;
return e;
}}
