#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,ar[20][20],n,m;
  clrscr();
  printf("ENTER THE SIZE OF ROW: ");
  scanf("%d",&n);
  printf("ENTER THR SIZE OF COLUMN: ");
  scanf("%d",&m);
  printf("ENTER THE VALUES IN MATRIX: ");
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      scanf("%d",&ar[i][j]);
    }
  }
  printf("THE MATRIX IS: %dx%d \n",m,n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      printf("\t%d",ar[i][j]);
    }
    printf("\n");
  }
  printf("THE ANATHER MATRIX IS: %dx%d \n",n,m);
  for(j=0;j<m;j++)
  {
    for(i=0;i<n;i++)
    {
      printf("\t%d",ar[i][j]);
    }
    printf("\n");
  }
  getch();
}
