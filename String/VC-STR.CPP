#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,l,v=0,c=0;
  char s[]={'U','N','I','V','E','R','S','A','L','\0'};
  l=strlen(s);
  char s1[10],s2[10];
  clrscr();
  for(i=0;i<l;i++)
  {
    if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
    s1[v++]=s[i];
    else
    s2[c++]=s[i];
  }
  s1[v]='\0';
  s2[c]='\0';
  printf("%s",s1);
  printf("\n%s",s2);
  getch();
}
