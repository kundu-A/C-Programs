#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,l;
  char ar[20];
  clrscr();
  printf("ENTER THE STRING IN CAPITAL: ");
  gets(ar);
  l=strlen(ar);
  for(i=0;i<l;i++)
  {
  ar[i]=(ar[i]+32);
  }
  puts(ar);
  getch();
}