#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,c=1;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
     printf(" %d ",c);
     c=c+1;
    }
    printf("\n");
  }
  getch();
}
