#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,j,l,c=0;
  char ar[20],a;
  clrscr();
  printf("ENTER THE STRING: ");
  gets(ar);
  printf("ENTER THE SCEARCHING ALPHABATE: ");
  scanf("%c",&a);
  l=strlen(ar);
  for(i=0;i<l;i++)
  {
    if(a==ar[i])
    c=c+1;
  }
  if(c!=0)
  printf("THE FREQUENCY OF THAT ALPHABATE IN THIS STRING IS: %d",c);
  else
  printf("THIS ALPHABATE IS NOT IN THIS STRING.");
  getch();
}