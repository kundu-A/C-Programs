#include<stdio.h>
#include<conio.h>
void main()
{
   int n,c,pro=1;
   printf("ENTER THE NUMBER:- ");
   scanf("%d",&n);
   c=1;
   do
    {
     pro=pro*c;
     c+=1;
    }while(c<=n);
   printf("\nthe value of factorial=%d",pro);
   getch();
}