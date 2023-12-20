#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j;
 clrscr();
 printf("ENTER THE RANGE: ");
 scanf("%d",&n);
 printf("YOUR PATTERN IS: \n");
 for(i=1;i<=n;i++)
 {
   for(j=i*2-1+64;j<=i*2+1+65;j++)
   printf("%c ",j);
   printf("\n");
 }
 getch();
}
