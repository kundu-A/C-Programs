#include<stdio.h>
#include<conio.h>
void main()
{
    int n,d,i,j,p=1,sum=0,m;
    clrscr();
    printf("ENTER THE NUMBER:-  ");
    scanf("%d",&n);
    m=n;
    if(n>0)
    {
       while(n!=0)
       {
	  d=n%10;
	  p=1;
	  for(j=1;j<=d;j++)
	 {
	 p=p*j;
	 }
	 n=n/10;
	 sum=sum+p;
       }
       if(m==sum)
       printf("IT IS A PETERSON NUMBER");
       else
       printf("IT IS NOT  A PETERSON NUMBER");
    }
    getch();
}

