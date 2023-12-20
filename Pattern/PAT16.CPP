#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k;
  clrscr();
  printf("ENTRE THE RANGE: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i;j++)
    printf(" ");
    for(k=n-i;k<=n;k++)
    printf("%d ",k);
    printf("\n");
  }
  getch();
}