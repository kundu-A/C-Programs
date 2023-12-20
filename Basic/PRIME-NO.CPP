#include<stdio.h>
#include<conio.h>
void main()
{
    int n,c,fl=0;
    clrscr();
    printf("ENTER THE NUMBER:- ");
    scanf("%d",&n);
    for(c=2;c<=n/2;c++);
    {
       if(n%c==0)
       fl=1;
    }
    if(fl==1)
    printf("IT IS NON PRIME");
    else
    printf("IT IS PRIME");
    getch();
}