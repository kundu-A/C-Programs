#include<stdio.h>
#include<conio.h>
int ave(int,int,int);
void main()
{
  int a,b,c,avg;
  clrscr();
  printf("ENTER THE 1ST NUMBER:- ");
  scanf("%d",&a);
  printf("ENTER THE 2ND NUMBER:- ");
  scanf("%d",&b);
  printf("ENTER THE 3RD NUMBER:- ");
  scanf("%d",&c);
  avg=ave(a,b,c);
  printf("THE RESULT OF AVERAGE=%d",avg);
  getch();
}
int ave(int x, int y, int z)
{
  int d;
  d=(x+y+z)/3;
  return d;
}