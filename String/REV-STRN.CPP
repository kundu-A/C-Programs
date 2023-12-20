#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char ar[20];
  int i,l;
  clrscr();
  printf("ENTER THE STRING: ");
  gets(ar);
  l=strlen(ar);
  for(i=l-1;i>=0;i--)
  printf("%c",ar[i]);
  getch();
}