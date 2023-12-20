#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,j,l;
  char ar[50],c;
  clrscr();
  printf("ENTER THE STRING: ");
  gets(ar);
  l=strlen(ar);
  for(i=0;i<l;i++)
  {
    for(j=0;j<l-1-i;j++)
     {
       if(ar[j]>ar[j+1])
      {
	c=ar[j];
	ar[j]=ar[j+1];
	ar[j+1]=c;
      }
     }
  }
  puts(ar);
  getch();
}

