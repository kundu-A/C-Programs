#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("ENTER NUMBERS:-");
    scanf("%d%d",&a,&b);
    printf("THE VALUE OF a=%d and b=%d",a,b);
    if(a>b)
    printf("\n\nTHE LARGEST VALUE=%d,",a);
    else if(b>a)
    printf("\n\nTHE LARGEST VALUE=%d",b);
    getch();
}