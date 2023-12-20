#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     for(j=65;j<=n-i+65;j++)
     {
       if(j==65 || j==n-i+65)
       printf("%c ",j);
       else
       printf("  ");
     }
     printf("\n");
  }
  getch();
}