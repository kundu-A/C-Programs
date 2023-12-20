#include<stdio.h>
#include<conio.h>
void main()
{
    int n,c;
    clrscr();
    printf("enter the number:- ");
    scanf("%d",&n);
    c=1;
    do
    {
      printf("the value is %d",n);
      c+=1;
    }while(c<=n);
    getch();
}