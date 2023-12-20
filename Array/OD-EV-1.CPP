#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[20],ar1[20],n,i,k=0;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  printf("ENTER VALUES IN ARRAY: ");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  for(i=0;i<n;i++)
  {
    if(ar[i]%2!=0)
    ar1[k++]=ar[i];
  }
  for(i=0;i<n;i++)
  {
    if(ar[i]%2==0)
    ar1[k++]=ar[i];
  }
  printf("YOUR ARRAY IS: \n");
  for(i=0;i<n;i++)
  printf("%d ",ar1[i]);
  getch();
}
