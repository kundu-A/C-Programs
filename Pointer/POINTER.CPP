#include<stdio.h>
#include<conio.h>
void main()
{
   int a=25,c=40,*p;
   clrscr();
   p=&a;
   printf("%d\n",a);
   printf("%u\n",&a);
   printf("%u\n",p);
   printf("%u\n",&p);
   printf("%d\n",*p);
   printf("%d\n",*p+10);
   printf("%d\n",(*p)++);
   printf("%d\n",*(++p));
   printf("%d\n",a);
   printf("%d\n",c);
   printf("\"THIS IS MY FIRST POINTER RELATED PROGRAM\" ");
   getch();
}