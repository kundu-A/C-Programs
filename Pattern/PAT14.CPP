#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j;
  clrscr();
  printf("ENTRE THE RANGE:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   for(j=i;j>=1;j--)
   {
     printf("%d",j);
   }
   printf("\n");
  }
  getch();
}