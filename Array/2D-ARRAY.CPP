#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,ar[20][20],n;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  printf("ENTER VALUES IN ARRAY: ");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
       scanf("%d",&ar[i][j]);
    }
  }
  printf("THE ARRAY IN ROW IS : \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("\t%d ",ar[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("THE ARRAY IN COLUMN IS: \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("\t%d",ar[j][i]);
    }
    printf("\n");
  }
  getch();
}