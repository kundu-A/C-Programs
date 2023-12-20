#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,p=1;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  while(p<=n)
  {
  if(n%2!=0)
  {
    for(i=1;i<=n;i++)
    printf("%d ",i);
    printf("\n");
  }
  if(n%2==0)
  {
    for(i=n;i>=1;i--)
    printf("%d ",i);
    printf("\n");
  }
  p++;
  }
  getch();
}