#include<stdio.h>
#include<conio.h>
void main()
{
   int ar[50],n,i,odd[50],even[50],o=0,e=0,j,k,a=0,c=0;
   clrscr();
   printf("ENTER THE SIZE OF ARRAY: ");
   scanf("%d",&n);
   printf("ENTER VALUES IN ARRAY: ");
   for(i=0;i<n;i++)
   scanf("%d",&ar[i]);
   for(i=0;i<n;i++)
   {
     if(ar[i]%2==0)
     {
     even[e++]=ar[i];
     c=c+1;
     }
     else
     {
     odd[o++]=ar[i];
     a=a+1;
     }
   }
   printf("TOTAL NUMBER OF EVEN IS: %d",c);
   printf("\nTOTAL NUMBERS OF EVEN ARE: ");
   for(j=0;j<e;j++)
   printf("%d ",even[j]);
   printf("\n");
   printf("TOTAL NUMBER OF ODD IS: %d",a);
   printf("\nTOTAL NUMBER OF ODD ARE: ");
   for(k=0;k<o;k++)
   printf("%d ",odd[k]);
   getch();
}