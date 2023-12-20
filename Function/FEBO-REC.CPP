#include<stdio.h>
#include<conio.h>
int febo(int);
void main()
{
  int n,i;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  printf("THE FEBONACCI SERIES IS: \n");
  for(i=0;i<n;i++)
  printf("%d ",febo(i));
  getch();
}
int febo(int n)
{
  if(n==0 || n==1)
  return n;
  else
  return(febo(n-1)+febo(n-2));
}
