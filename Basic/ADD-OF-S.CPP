#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   float n,i,a=1,p,sum=0;
   clrscr();
   printf("ENTER THE RANGE:- ");
   scanf("%f",&n);
   for(i=0;i<n;i++)
   {
       p=pow(2,i);
       sum=sum+a/p;
       printf(",%f/%f",a,p);
   }
   printf("\n%f",sum);
   getch();
}