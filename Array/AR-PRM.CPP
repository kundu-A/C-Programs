#include<stdio.h>
#include<conio.h>
void main()
{
   int ar[50],n,i,j,arr[50],flag=0,r=0,c=0;
   clrscr();
   printf("ENTER THE SIZE OF ARRAY: ");
   scanf("%d",&n);
   printf("ENTER VALUES IN ARRAY: ");
   for(i=0;i<n;i++)
   scanf("%d",&ar[i]);
   for(i=0;i<n;i++)
   {
     flag=0;
     for(j=2;j<ar[i];j++)
     {
       if(ar[i]%j==0)
       {
       flag=1;
       break;
       }
     }
     if(flag==0)
     {
     c=c+1;
     arr[r++]=ar[i];
     }
   }
   for(i=0;i<r;i++)
   printf("%d ",arr[i]);
   printf("TOTAL NUMBERS OF PRIME IS: %d",c);
   getch();
}
