#include<stdio.h>
#include<conio.h>
void main()
{
   clrscr();
   int i,n;
   char ar[10];
   printf("ENTER A NAME: ");
   scanf("%s",&ar);
   printf("ENTER THE RANGE :-");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
      textcolor(i+BLINK);
      cprintf("%s\n",ar);
   }
   getch();
}