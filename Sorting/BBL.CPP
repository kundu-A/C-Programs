#include<stdio.h>
#include<conio.h>
void bbl(int ar[],int n);
void main()
{
   int ar[5],i,n=5;
   clrscr();
   printf("ENTER THE VALUE:- ");
   for (i=0;i<n;i++)
   scanf("%d",&ar[i]);
   bbl (ar,n);
   for (i=0;i<n;i++)
   {
   printf(" %d ",ar[i]);
   }
   getch();
}
void bbl(int ar[],int y)
{
  int i,j,k;
  for(i=0;i<y;i++)
  {
    for(j=0;j<y-1-i;j++)
    {
       if (ar[j]>ar[j+1])
      {
       k=ar[j];
       ar[j]=ar[j+1];
       ar[j+1]=k;
      }
    }
  }
}