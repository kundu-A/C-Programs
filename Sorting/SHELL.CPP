#include<stdio.h>
#include<conio.h>
void shell(int [],int);
void main()
{
  int ar[20],n,i;
  clrscr();
  printf("ENTER THE SIZE OF THE ARRAY: ");
  scanf("%d",&n);
  printf("ENTER THE VALUES IN ARRAY: ");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  shell(ar,n);
  printf("\nTHE SORTED ARRAY IS: ");
  for(i=0;i<n;i++)
  printf("%d ",ar[i]);
  getch();
}
void shell(int ar[],int n)
{
   int temp,gap,flag,i;
   gap=n/2;
   while(gap>0)
   {
     flag=1;
     while(flag==1)
     {
       flag=0;
       for(i=0;i<n-gap;i++)
       {
	 if(ar[i]>ar[i+gap])
	 {
	   temp=ar[i];
	   ar[i]=ar[i+gap];
	   ar[i+gap]=temp;
	   flag=1;
	 }
       }
     }
     gap=gap/2;
   }
}

