#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k,l;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
    printf("%d",j);
    }
    printf("\n");
  }
  for(k=1;k<=n;k++)
  {
    for(l=1;l<=k;l++)
    {
    printf("%d",l);
    }
    printf("\n");
  }
  getch();
}

