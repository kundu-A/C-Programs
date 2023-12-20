#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("ENTER THE NUMNER TO CHEAK:  ");
    scanf("%d",&n);
    if(n%2==0)
    printf("IT IS AN EVEN NUMBER");
    else
    printf("IT IS AN ODD NUMBER");
    getch();
}