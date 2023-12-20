#include<stdio.h>
#include<conio.h>
void evenary(int ar[],int n);
int c=0,p=0;
void main()
{
  int ar[10],n,i;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  evenary(ar,n-1);
  printf("YOUR ARRAY IS:\n");
  for(i=0;i<n;i++)
  printf("%d ",ar[i]);
  getch();
}
void evenary(int ar[],int n)
{
  if(n>=0)
  {
    int v;
    evenary(ar,n-1);
    printf("ENTER A VALUE:");
    scanf("%d",&v);
    if(v%2==0)
    ar[p++]=v;
  }
}
