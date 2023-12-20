#include<stdio.h>
#include<conio.h>
void main()
{
   int a[10],b[10],n,i,*p,*p1,t;
   clrscr();
   printf("ENTER THE RANGE: ");
   scanf("%d",&n);
   p=a;
   printf("ENTER VALUES IN ARRAY: ");
   for(i=0;i<n;i++)
   {
     scanf("%d",p);
     p++;
   }
   p=a;
   printf("\nYOUR FIRST ARRAY IS: \n");
   for(i=0;i<n;i++)
   {
     printf("%d ",*p);
     p++;
   }
   p1=b;
   printf("\nENTER VALUES IN ARRAY: ");
   for(i=0;i<n;i++)
   {
     scanf("%d",p1);
     p1++;
   }
   p1=b;
   printf("\nYOUR SECOND ARRAY IS: \n");
   for(i=0;i<n;i++)
   {
     printf("%d ",*p1);
     p1++;
   }
   p=a;
   p1=b;
   for(i=0;i<n;i++)
   {
     t=*p;
     *p=*p1;
     *p1=t;
     p++;
     p1++;
   }
   p=a;
   p1=b;
   printf("\nAFTER INTERCHANGE VALUES: \n");
   printf("NOW YOUR FIRST ARRAY IS: \n");
   for(i=0;i<n;i++)
   {
     printf("%d\t",*p);
     p++;
   }
   printf("\nNOW YOUR SECOND ARRAY IS: \n");
   for(i=0;i<n;i++)
   {
     printf("%d\t",*p1);
     p1++;
   }
   getch();
}
