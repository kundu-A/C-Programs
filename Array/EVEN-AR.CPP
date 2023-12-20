#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[10],n,i,c=0;
  clrscr();
  printf("ENTER THE RANGE OF ARRAY:- ");
  scanf("%d",&n);
  printf("ENTER VALUES IN ARRAY:- ");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  for(i=0;i<n;i++)
  {
    if(ar[i]%2==0)
    c=c+1;
  }
  printf("TOTAL EVEN NUMBER=%d",c);
  getch();
}
