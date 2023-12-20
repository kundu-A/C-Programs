#include<stdio.h>
#include<conio.h>
int prm(int ar[],int n);
void main()
{
   int ar[50],i,n,r,p;
   clrscr();
   printf("enter the range:- ");
   scanf("%d",&n);
   printf("enter the value:- ");
   for(i=0;i<n;i++)
   scanf("%d",&ar[i]);
   p=prm(ar,n);
   printf("The no of prime no is %d",p);
   getch();
}
int prm(int ar[],int n)
{
  int c=0,i,flag=0,p,j;
    for(i=0;i<n;i++)
    {
    flag=0;
    p=ar[i];
    for(j=2;j<p;j++)
     {
      if(p%j==0)
      {
      flag=1;
      break;
      }
     }
     if(flag==0)
     c=c+1;
    }
    return c;
}

