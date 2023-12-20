#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[50],n,i,j;
  clrscr();
  printf("ENTER THE SIZE OF ARRAY(50):- ");
  scanf("%d",&n);
  printf("ENTER THE VALUES:- ");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  printf("The Array is:- ");
  for(i=0;i<n;i++)
  printf("%d ",ar[i]);
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
      if(ar[i]==ar[j+1])
      ar[j+1]=-1;
    }
  }
  printf("\nThe Array is:- ");
  for(i=0;i<n;i++)
  if(ar[i]!=-1)
  printf("%d ",ar[i]);
  getch();
}