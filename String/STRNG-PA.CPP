#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,l,flag=0;
  char ar[20];
  clrscr();
  printf("ENTER THE STRING: ");
  gets(ar);
  l=strlen(ar);
  for(i=0;i<l/2;i++)
  {
    if(ar[i]!=ar[l-1-i])
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
  printf("THE STRING IS PALINDROME");
  else
  printf("THE STRING IS NON PALINDROME");
  getch();
}
