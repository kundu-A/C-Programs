#include<stdio.h>
#include<conio.h>
#include<process.h>
int n,arr[10],j,i,c=0,s,g,f=0;
void prt();
void cout();
void main()
{
 clrscr();
 printf("Enter the Range: ");
 scanf("%d",&n);
 printf("Enter %d Values: ",n);
 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 do
 {
  printf("\n1.Print the Prime number\t2.Count the prime number\t3.Exit\n");
  printf("Enter The Choice: ");
  scanf("%d",&s);
  switch(s)
  {
   case 1: prt();
	   break;
   case 2: cout();
	   break;
   case 3: exit(0);
   default: printf("\nWorng Choice...\n");
  }
  printf("\nPress '1' To Continue or press any digits except '1' to Exit\n");
  printf("Enter the Choice: ");
  scanf("%d",&g);
 }while(g==1);
}
void prt()
{
 for(i=0;i<n;i++)
 {
  f=0;
  for(j=2;j<arr[i]/2;j++)
  {
   if(arr[i]%j==0)
   {
    f=1;
    break;
   }
  }
  if(f==0)
  printf("%d ",arr[i]);
 }
 printf("\n");
}
void cout()
{
 for(i=0;i<n;i++)
 {
  f=0;
  for(j=2;j<arr[i]/2;j++)
  {
   if(arr[i]%j==0)
   {
    f=1;
    break;
   }
  }
  if(f==0)
  ++c;
 }
 printf("\nThe Number is %d\n",c);
}