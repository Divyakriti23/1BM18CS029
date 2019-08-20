#include<stdio.h>
#include<ctype.h>
void push(char s[100], int *t, char c)
{
	if(*t==99)
		printf("Stack overflow");
	else
	{
		*t=*t+1;
		s[*t]=c;
	}
return;
}
char pop(char s[100], int *t)
{
	if(*t==-1)
	{		
		printf("Stack underflow");
	}
	else
	{
	return s[*t--];
	}
}
int pre(char c)
{
	if(c=='/'|| c=='*')
	return 2;
	else if(c=='^')
	return 3;
	else if(c=='+' || c=='-')
	return 1;
	else
	return 0;
}
void main()
{
char s[100], st[100];
int top =-1, n;
printf("Enter the lenght of infix expression");
scanf("%d\n", &n);
for(int i=0; i<n+1; i++)
{
	scanf("%c", & st[i]);
	if(st[i]>='A')
	{
		printf("%c", st[i]);
	}
	else if(pre st[i]>pre (s[top]) || top==-1 || s[top]=='(')
	{
		push(s, &t, st[i]);
	}
	else if(pre(st[i])<pre(s[top]))
	{
		for(int j=0; pre(s[top])>=pre(st[j]); j++)
		{
			pop(s, &top);
		}
		push(s, &top, st[i]);
	}
	else if(st[i]=='(')
	{
		push(s, &top, st[i]);
	}
	else if (st[i]=='(')
	{
		for(int k=top; s[k]!='('; k--)
		{
			a=pop(s, &top);
			printf("%c", a);
		}
	}
	else
		int ab=0;
	}
}

