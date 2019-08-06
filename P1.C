#include<stdio.h>
#include<conio.h>
struct marks
{
  int m[5];
};
void main()
{
 int i;
 struct marks s;
 clrscr();

printf("Enter marks of the subjects\n");

  for(i=0; i<5; i++)

{

scanf("%d" , &s.m[i]);

 }

 for(i=0; i<5; i++)
    {
    printf("subject %d marks = %d \n",i+1, s.m[i]);
    }

 getch();
}