#include<stdio.h>
#include<conio.h>
void main()
{
    int n,c,sum=0;
    clrscr();
    printf("enter the number to sum:- ");
    scanf("%d",&n);
    c=1;
    do
    {
      sum=sum+c;
      c+=1;
    }while(c<=n);
    printf("the value of sum=%d",sum);
    getch();
}