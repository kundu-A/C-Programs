#include<stdio.h>
#include<conio.h>
void main()
{
    int n,d,p,sum=0,i,m;
    clrscr();
    printf("ENTER THE NUMBER:- ");
    scanf("%d",&n);
    m=n;
    if(n>0)
    {
	for(i=n;i>=1;i--)
	{
	    d=n%10;
	    p=d*d*d;
	    sum=sum+p;
	    n=n/10;
	}
	if(m==sum)
	printf("IT IS A ARMSTRONG NUMBER");
	else
	printf("IT IS NOT A ARMSTRONG NUMBER");
    }
    getch();
}
