#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,l;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n-i-1;j++)
   printf(" ");
   {
     for(l=1;l<=i;i++)
     {
       printf(" %d ",j);
     }
     printf("\n");
   }
  }
  getch();
}
