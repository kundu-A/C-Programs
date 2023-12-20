#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,ar[10];
  clrscr();
  printf("ENTER THE RANGE OF THE ARRAY: ");
  scanf("%d",&n);
  printf("PLEASE ENTER VALUES IN ARRAY: ");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(ar[i]==ar[j] || ar[i]==-1)
      ar[i]=-1;
    }
  }
  printf("AFTER REMOVING DUPLICATE ELIMENT: ");
  for(i=0;i<n;i++)
  {
    if(ar[i]!=-1)
    printf("%d ",ar[i]);
  }
  getch();
}