#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n;
   clrscr();
   printf("ENTER THE RANGE:- ");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
     textcolor(i);
     cprintf("ARPAN\n");
   }
   getch();

}