#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,temp,swap,ar[10];
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("ENTER THE NUMBER: ");
    scanf("%d",&temp);
    if(i==0)
    ar[i]=temp;
    else
    {
      for(j=0;j<i;j++)
      {
	if(ar[j]>temp)
	{
	  swap=ar[j];
	  ar[j]=temp;
	  temp=swap;
	}
      }
      ar[i]=temp;
    }
  }
  printf("\nTHE SORTED ARRAY IS:\n");
  for(i=0;i<n;i++)
  printf("%d ",ar[i]);
  getch();
}
