#include<stdio.h>
#include<conio.h>
void main()
{
  int n,d,p=0,s=0;
  clrscr();
  printf("ENTER THE NUMBER:");
  scanf("%d",&n);
  while(n!=0)
  {
    d=n%10;
    p=(p*10)+d;
    n=n/10;
    s=s+d;

  }
  printf("REVERSE OF THAT OF NUMBER IS %d ",p);
  printf("\nSUM OF EVERY DIGIT OF THAT REVERSE NUMBER IS %d",s);
  getch();
}
