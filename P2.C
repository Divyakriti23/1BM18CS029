#include<stdio.h>
#include<conio.h>
int grade(float n);
void main()
{
float SGPA;
struct marks
{
float ds, dm, coa, mp, ld, cipe, java, project;
}
st1;
clrscr();
printf("Enter the marks of the student in respective subjects");
scanf("%d", &st1.ds);
scanf("%d", &st1.dm);
scanf("%d", &st1.coa);
scanf("%d", &st1.mp);
scanf("%d", &st1.ld);
scanf("%d", &st1.cipe);
scanf("%d", &st1.java);
scanf("%d", &st1.project);
SGPA = (grade(st1.ds)*4 + grade(st1.dm)*4 + grade(st1.coa)*3 + grade(st1.mp)*4 + grade(st1.ld)*3 + grade(st1.cipe)*1 + grade(st1.java)*4 + grade(st1.project)*2);
printf("SGPA : %f", SGPA);
getch();
}
int grade(float n)
{
int gradepoint;
if(n>=90)
gradepoint = 10;
else if ((n>=75)&&(n<90))
gradepoint = 9;
else if((n>=60)&&(n<75))
gradepoint = 8;
else if((n>=50)&& (n<60))
gradepoint = 7;
else if ((n>=40)&& (n<50))
gradepoint = 6;
else
printf("Failed");
return gradepoint;
}
