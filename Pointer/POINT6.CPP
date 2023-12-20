#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[10][10],n,i,j, *p[10];
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&ar[i][j]);
  }
  p[0]=&ar[0][0];
  /*for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)*/
     printf("%d",*(*(p+1)+2));
  //}
  getch();
}
