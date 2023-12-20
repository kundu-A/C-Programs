#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,l,j,sum=0, a[30],k=0;
   clrscr();
   printf("ENTER THE NUMBER:-");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   { int a[30],k=0;
     for(j=1;j<=i;j++)
     {
       sum=sum+j;
       if(i>1)
       a[k++]=j;
     }
       if(i==1)
       printf("(%d)",i);
       else
       {
       printf("(");
       for(l=0;l<k;l++)
	printf("%d+",a[l]);
       printf(")");
       }
   }
   printf("\n%d",sum);
   getch();
}