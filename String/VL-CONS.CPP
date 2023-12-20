#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,j,k=0,len,l,v=0,c=0;
  char ar[50],n[50];
  clrscr();
  printf("ENTER THE STRING: ");
  gets(ar);
  len=strlen(ar);
  for(i=0;i<len;i++)
  {
    if(ar[i]!=' ')
    {
      if(ar[i]=='a' || ar[i]=='e' || ar[i]=='i' || ar[i]=='o' || ar[i]=='u')
      {
	n[k++]=ar[i];
	v++;
      }
    }
  }
  for(i=0;i<len;i++)
  {
    if(ar[i]!='a' && ar[i] !='e' && ar[i] !='i' && ar[i] !='o' && ar[i] !='u'&& ar[i] !=' ')
    {
      n[k++]=ar[i];
      c++;
    }
  }
  for(i=0;i<k;i++)
  printf("%c ",n[i]);
  printf("TOTAL NUMBER OF VOWEL IS: %d AND TOTAL NUMBER OF CONSONENT IS: %d",v,c);
  getch();
}


