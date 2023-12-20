#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k,n;
   clrscr();
   printf("ENTER THE RANGE: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      if(i%2!=0)
      {
	for(j=1;j<=n;j++)
	printf("%d ",j);
	printf("\n");
      }
      else
      {
	for(k=n;k>=1;k--)
	printf("%d ",k);
	printf("\n");
      }
   }
   getch();
}
