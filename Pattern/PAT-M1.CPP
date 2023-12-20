#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
       for(j=1;j<=2*n-1;j++)
       {
	 if(j==1 || j==2*n-1 ||(i==n && j==n) || ((i>1 && i<n) && (j>1 && j<n) && j==i) || ((i>1 && i<n) && (j>n && j<2*n-1) && j==(2*n-1)-i+1))
	 printf(" * ");
	 else
	 printf("   ");
       }
       printf("\n");
  }
  getch();
}