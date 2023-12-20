#include<stdio.h>
#include<conio.h>
void main()
{
   int ar[10],i,l=-1,j;
   clrscr();
   printf("ENTER THE 10 VALUES IN THE ARRAY\n");
   for(i=0;i<10;i++)
   scanf("%d",&ar[i]);
   for(j=0;j<10;j++)
   {
     if(ar[j]>l)
     l=ar[j];
   }
   printf("THE LARGEST VALUE=%d",l);
   getch();
}