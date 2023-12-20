#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,*p1,*p2;
   clrscr();
   printf("ENTER THE VALUE OF A AND B:- ");
   scanf("%d%d",a,b);
   printf("%d",a);
   printf("%d",b);
   p1=a;
   p2=b:
   printf("%d",*p1++);
   printf("%d",*p2++);
   getch();
}