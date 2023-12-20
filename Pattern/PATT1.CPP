#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k;
  clrscr();
  printf("ENTER THE RANGE: ") ;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
      if(j%2!=0)
      printf("1");
      else
      printf("2");
    }
    for(k=i-1;k>=1;k--)
    {
      if(k%2!=0)
      printf("1");
      else
      printf("2");
    }
   printf("\n");
  }
  getch();
}

