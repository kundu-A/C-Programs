#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[50],n,i,l;
  clrscr();
  printf("ENTER THE SIZE OF ARRAY:- ");
  scanf("%d",&n);
  printf("ENTER VALUES:- ");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  l=ar[0];
  for(i=0;i<n;i++)
  {
    if(ar[i]>l)
    l=ar[i];
  }
  printf("THE LARGEST NUMBER=%d",l);
  getch();
}
