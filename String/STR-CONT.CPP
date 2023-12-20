#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,c=0,w=0,l;
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
  w=c+1;
  printf("TOTAL NUMBER OF WORD IS %d",w);
  getch();
}