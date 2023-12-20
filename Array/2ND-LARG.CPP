//2nd largest number in an array.
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,ar[20],j,k,t;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  printf("ENTER VALUES IN ARRAY: \n");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  printf("YOUR ELEMENTS ARE: \n");
  for(i=0;i<n;i++)
  printf("%d ",ar[i]);
  for(j=0;j<n;j++)
  {
    for(k=0;k<n-1-j;k++)
    {
      if(ar[k]<ar[k+1])
      {
	t=ar[k];
	ar[k]=ar[k+1];
	ar[k+1]=t;
      }
    }
  }
  printf("\nYOUR SORTED ELEMENTS ARE: ");
  for(i=0;i<n;i++)
  printf("\n%d ",ar[i]);
  printf("\nTHE 2'ND LARGEST NUMBER IS: %d",ar[1]);
  getch();
}
