#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j;
  clrscr();
  printf("ENTER THE RANGE IN ODD NUMBER TO CHECK PROPERLY: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=2*n-1;j++)
    {
      if(i==j || ((i>=1 && i<n) && j==2*n-i))
      printf(" * ");
      else
      printf("   ");
    }
    printf("\n");
  }
  getch();
}