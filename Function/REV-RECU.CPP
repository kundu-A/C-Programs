#include<stdio.h>
#include<conio.h>
int rev(int);
void main()
{
 int n=10,s;
 clrscr();
 s=rev(n);
 printf("%d",s);
 getch();
}
int rev(int n)
{
 if(n==1)
 return(n);
 else
 {
  printf(" %d ",n);
  return(rev(n-1));
  }
}