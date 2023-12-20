#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int c=0,l,i;
 char arr[20];
 clrscr();
 printf("Enter the String: ");
 gets(arr);
 puts(arr);
 l=strlen(arr);
 for(i=0;i<l;i++)
 if(arr[i]==' ')
 ++c;
 printf("The Number Of Words is %d",++c);
 getch();
}