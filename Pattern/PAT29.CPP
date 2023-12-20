#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k,l;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    {
       printf("%d ",j);
    }
   for(l=i;l<=n;l++)
    printf("* ");
    printf("\n");
  }
  getch();
}
