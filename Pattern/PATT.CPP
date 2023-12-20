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
    for(j=1;j<=i;j++)
    printf("%d",j);
    for(k=i-1;k>=1;k--)
    printf("%d",k);
    printf("\n");
  }
  for(i=n-1;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    printf("%d",j);
    for(k=i-1;k>=1;k--)
    printf("%d",k);
    printf("\n");
  }
  getch();
}
