#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,m;
  clrscr();
  printf("ENTRE THE RANGE: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    m=n;
    for(j=1;j<=i;j++)
    printf("%d",m--);
    printf("\n");
  }
  getch();
}