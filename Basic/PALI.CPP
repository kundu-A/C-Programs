#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char ar[20],arr[20];
  int i,l;
  clrscr();
  printf("ENTER THE STRING: ");
  gets(ar);
  l=strlen(ar);
  for(i=0;i<l;i++)
  arr[i]=ar[i];
  if(ar==arr)
  printf("PALINDROME");
  else
  printf("NOT PALINDROME");
  getch();
}