#include<stdio.h>
#include<conio.h>
void heap(int [],int);
void main()
{
  int ar[10],n,i,p,temp;
  clrscr();
  printf("ENTER THE SIZE OF THE ARRAY: ");
  scanf("%d",&n);
  printf("ENTER ELEMENTS IN ARRAY: ");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  heap(ar,n);
  for(p=1;p<n;p++)
  {
    temp=ar[0];
    ar[0]=ar[n-p];
    ar[n-p]=temp;
    heap(ar,n-p);
  }
  printf("SORTED ARRAY :");
  for(i=0;i<n;printf("%d ",ar[i++]));
  getch();
}
void heap(int ar[],int n)
{
   int i,j,k,t;
   for(k=1;k<n;k++)
   {
     t=ar[k];
     i=k;
     j=(k-1)/2;
     while(t>ar[j] && i>0)
     {
       ar[i]=ar[j];
       i=j;
       j=(j-1)/2;
     }
     ar[i]=t;
   }
}
