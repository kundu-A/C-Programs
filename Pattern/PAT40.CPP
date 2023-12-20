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
    for(j=1;j<=i;j++)
    {
      if(j%2!=0)
      printf("%d ",1);
      else
      printf("%d ",0);
    }
    printf("\n");
  }
  getch();
}

