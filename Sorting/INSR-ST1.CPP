#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,ar[20],temp=0;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  printf("ENTER VALUES IN ARRAY: ");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  for(i=0;i<n;i++)
  {
    j=i-1;
    temp=ar[i];
    while(j>=0 && ar[j]>temp)
    {
      ar[j+1]=ar[j];
      j--;
    }
    ar[j+1]=temp;
  }
  printf("SORTED ARRAY IS GIVEN BELOW: \n");
  for(i=0;i<n;i++)
  printf("%d ",ar[i]);
  getch();

}
