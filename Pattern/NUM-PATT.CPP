#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,c=1,l;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   for(l=0;l<n-1-i;l++)
    printf("   ");
    for(j=0;j<=i;j++)
    {
     printf("%d  ",c);
     c=c+1;
    }
  printf("\n");
  }
  getch();
}

