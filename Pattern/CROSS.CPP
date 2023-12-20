#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    if(i==j || j==n-1-i)
    printf("*");
    else
    printf(" ");
    printf("\n");
  }
  getch();
}