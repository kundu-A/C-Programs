#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k,m;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    printf("   ");
    for(k=i+1;k<=i*2+1;k++)
    printf(" %d ",k);
    for(m=i*2;m>=i+1;m--)
    printf(" %d ",m);
    printf("\n");
  }
  getch();
}
