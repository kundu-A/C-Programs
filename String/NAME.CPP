#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,l,c=0;
  char ar[20];
  clrscr();
  printf("ENTER THE STRING: ");
  gets(ar);
  l=strlen(ar);
  for(i=0;i<l;i++)
  {
    if(ar[i]==' ')
    c=c+1;
  }
  printf("%c.",ar[0]);
  for(i=1;i<l;i++)
  {
    if(ar[i]==' ')
    {
    c=c-1;
    if(c>0)
    printf("%c.",ar[i+1]);
    }
    if(c==0)
    printf("%c",ar[i]);
  }
  getch();
}