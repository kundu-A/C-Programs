#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a=1,i,c;
    clrscr();
    printf("ENTER THE RANGE:-    ");
    scanf("%d",&n);
    printf("%d",a);
    for(i=2;i<=n;i++)
    {
       printf(",%d/%d",a,i);
    }
    getch();
}