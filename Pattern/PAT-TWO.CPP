#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n;
  clrscr();
  printf("ENTER THE RANGE:");
  scanf("%d",&n);
  for(i=1;i<=n+1;i++)
  {
   for(j=1;j<=n;j++)
   {
     if((i==1 && j==1) || (i==1 && j==n))
     printf("   ");
     else if(((i>1 && i<n/2+1)&& j==1) || (i==1) || (i==n+1) || ((i>1 && i<n+1) && (j==n-i+2)))
     printf(" * ");
     else
     printf("   ");
   }
   printf("\n");
  }
  getch();
}