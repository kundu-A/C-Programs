#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char ar[20];
  int i,j,l=0;
  clrscr();
  printf("ENTER THE WORD: ");
  gets(ar);
  l=strlen(ar);
  for(i=0;i<l;i++)
  {
    for(j=i+1;j<l-i;j++)
    {
      if(ar[i]==ar[j] && ar[i]!=-1)
      ar[i]=-1;
    }
  }
  for(i=0;i<l;i++)
  {
    if(ar[i]!=-1)
    printf("%c",ar[i]);
  }
  getch();
}