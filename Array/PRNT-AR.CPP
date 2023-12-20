#include<stdio.h>
#include<conio.h>
void array(int ar[],int);
int v=0;
void main()
{
  int n,i,ar[10];
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  printf("ENTER VALUES IN ARRAY: ");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  n=n-1;
  printf("YOUR ARRAY IS:\n");
  array(ar,n);
  getch();
}
void array(int ar[],int n)
{
   if(n>=0)
   {
     array(ar,n-1);
     printf("%d ",ar[n]);
   }
}
