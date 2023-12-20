#include<stdio.h>
#include<conio.h>
void main()
{
     int n;
     clrscr();
     printf("ENTER THE NUMBER TO CHECK: ");
     scanf("%d",&n);
     if(n>0)
     printf("IT IS A POSITIVE NUMBER");
     if(n<0)
     printf("IT IS A NEGATIVE NUMBER");
     getch();
}