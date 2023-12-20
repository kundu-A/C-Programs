#include<stdio.h>
#include<conio.h>
float add(float,float);
float sub(float,float);
float multi(float,float);
float div(float,float);
void main()
{
   int n;
   clrscr();
   float a,b,n1,n2,n3,n4;
   printf("CHOSE YOUR OPTION\n1 FOR ADDITION\t2 FOR SUBTRACTION\t3 FOR MULTIPLICATION\t4 FOR DIVISION:- ");
   scanf("%d",&n);
   printf("ENTER THE NUMBER:-  ");
   scanf("%f%f",&a,&b);
   switch(n)
   {
     case 1:
     n1=add(a,b);
     printf("THE REULT OF ADDITION=%f",n1);
     break;
     case 2:
     n2=sub(a,b);
     printf("THE RESULT OF SUBTRACTION=%f",n2);
     break;
     case 3:
     n3=multi(a,b);
     printf("THE RESULT OF MULTIPLICATION=%f",n3);
     break;
     case 4:
     n4=div(a,b);
     printf("THE RESULT OF DIVISION=%f",n4);
     break;
   }
   getch();
}
float add(float x,float y)
{
   float n1;
   n1=x+y;
   return n1;
}
float sub(float x,float y)
{
   float n2;
   n2=x-y;
   return n2;
}
float multi(float x,float y)
{
   float n3;
   n3=x*y;
   return n3;
}
float div(float x,float y)
{
   float n4;
   n4=x/y;
   return n4;
}








