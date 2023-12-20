#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(k=i;k>=1;k--)
    printf(" ");
    for(j=i;j<=n*2-i;j++)
    {
      if(i%2!=0)
      {
	if(j%2!=0)
	printf("*");
	else
	printf(" ");
      }
      else
      {
	if(j%2==0)
	printf("*");
	else
	printf(" ");
      }
    }
    printf("\n");
  }
    for(i=n-1;i>=1;i--)
    {
      for(j=i;j>=1;j--)
      printf(" ");
      for(k=i;k<=n*2-i;k++)
      {
	if(i%2!=0)
	{
	  if(k%2!=0)
	  printf("*");
	  else
	  printf(" ");
	}
	else
	{
	  if(k%2==0)
	  printf("*");
	  else
	  printf(" ");
	}
      }
      printf("\n");
    }
  getch();
}
