#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,ar[20][20];
  clrscr();
  printf("ENTER THE RANGE OF MATRIX: ");
  scanf("%d",&n);
  printf("ENTER VALUES IN MATRIX: ");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&ar[i][j]);
  }
  printf("YOUR MATRIX IS: \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    printf("%d\t",ar[i][j]);
    printf("\n");
  }
  printf("AFTER TRANSPOSSING THE MATRIX IS: \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    printf("%d\t",ar[j][i]);
    printf("\n");
  }
  getch();
}