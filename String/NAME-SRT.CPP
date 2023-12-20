#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct name
{
   char str[20];
}nm;
void main()
{
   nm ar[10];
   int i,n;
   clrscr();
   printf("ENTER THE SIZE OF THE ARRAY: ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     printf("ENTER %d NAME: ",i+1);
     ar[i].gets(str);
   }
   for(i=0;i<n;i++)
   ar[i].puts(str);
   getch();
}

