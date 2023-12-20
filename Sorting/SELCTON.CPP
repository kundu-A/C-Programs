#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,pos,s,ar[10];
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  printf("ENTER VALUES IN ARRAY: ");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  for(i=0;i<n;i++)
  {
    s=ar[i];
    pos=i;
    for(j=i+1;j<n;j++)
    {
      if(ar[j]<s)
      {
	s=ar[j];
	pos=j;
      }
    }
    ar[pos]=ar[i];
    ar[i]=s;
  }
  printf("SORTED ELEMENTS ARE GIVEN BELOW: \n");
  for(i=0;i<n;i++)
  printf("%d ",ar[i]);
  getch();
}
