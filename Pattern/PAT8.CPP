#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,k;
 clrscr();
 printf("ENTER THE RANGE: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
   if(i==n)
   for(k=1;k<=n-i;k++)
   printf("%d",k);
   else
   for(j=1;j<=i;j++)
   {
   printf("%d",j);
   }
   printf("\n");
 }
 getch();
}