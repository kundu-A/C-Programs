#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,ar[20][20],arr[20][20],arrr[20][20],r,c;
  clrscr();
  printf("ENTER THE SIZE OF ROW: ");
  scanf("%d",&r);
  printf("ENTER THE SIZE OF COLUMN:");
  scanf("%d",&c);
  printf("ENTER THE VALUES OF 1'S MATRIX: ");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&ar[i][j]);
    }
  }
  printf("THE 1'ST MATRIX IS : \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("\t%d",ar[i][j]);
    }
    printf("\n");
  }
  printf("\nENTER THE VALUES OF 2'ND MATRIX: ");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  printf("THE 2'ND MATRIX IS: \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("\t%d",arr[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      arrr[i][j]=ar[i][j]+arr[i][j];
    }
  }
  printf("\nTHE ADDITION OF THIS TWO MATRIX IS: \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf("\t%d",arrr[i][j]);
    }
    printf("\n");
  }
  getch();
}