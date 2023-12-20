#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char ar[20];
  int i,j,l,c=0,c1=0;
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
  for(j=1;j<l;j++)
  {
    if(ar[j]==' ')
    {
    c1=c1+1;
    if(c>c1)
    printf("%c.",ar[j+1]);
    }
    if(c==c1)
    printf("%c",ar[j]);
  }
  getch();
}