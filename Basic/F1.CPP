#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("ENTER NUMBERs:- " );
    scanf("%d%d",&a,&b);
    printf("\n BEFORE SWIPPING THE VALUE OF a is=%d and b is=%d",a,b);
    printf("\nAfter Interchange  ");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d and  b=%d",a,b);
    getch();
}