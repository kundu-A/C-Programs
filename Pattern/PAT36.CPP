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
    for(j=1;j<=n;j++)
    {
      if(i%2!=0)
      {
	if(j%2!=0)
	printf("1");
	else
	printf("0");
      }
      else
      {
	if(j%2!=0)
	printf("0");
	else
	printf("1");
      }
    }
    printf("\n");
  }
  getch();
}

