#include<stdio.h>
#include<conio.h>
void main()
{
   int l,f,i,flag=0,sum=0,s;
   clrscr();
   printf("ENTER THE INITIAL POINT:- ");
   scanf("%d",&f);
   printf("ENTER THE RANGE:- ");
   scanf("%d",&l);
   for(s=f;s<=l;s++)
   {
      flag=0;
      for(i=2;i<s;i++)
      {
	 if(s%i==0)
	 {
	   flag=1;
	   break;
	 }
      }
      if(flag==0)
      sum=sum+s;
   }
   printf("THE SUM IS= %d",sum);
   getch();
}