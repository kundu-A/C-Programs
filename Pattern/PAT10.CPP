#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,l,k;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
      printf(" ");
    }
      for(l=1;l<=i;l++)
       {
	 printf("%d",l);
       }
       for(k=i-1;k>=1;k--)
       {
	printf("%d",k);
       }
  printf("\n");
  }
  getch();
}

