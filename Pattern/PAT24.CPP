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
    for(j=65;j<n-i+65;j++)
    printf("%c ",j);
    printf("\n");
  }
  getch();
}