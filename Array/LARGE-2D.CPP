#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,l=-1,ar[50][50],n,a,b;
  clrscr();
  printf("ENTER THE SIZE OF MATRIX: ");
  scanf("%d",&n);
  printf("ENTER VALUES IN MATRIX: ");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&ar[i][j]);
  }
  printf("THE MATRIX IS: \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    printf("\t%d",ar[i][j]);
    printf("\n");
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(l<ar[i][j])
      {
	l=ar[i][j];
	a=i;
	b=j;
      }
    }
  }
  printf("THE LARGEST ELEMENT OF THIS MATRIX IS: %d\nAND IT'S POSITION IS AR[%d][%d]",l,a,b);
  getch();
}