#include<stdio.h>
#include<conio.h>
void main()
{
  char ar[20];
  int n,i,j,v=0,c=0;
  clrscr();
  printf("ENTER THE SIZE OF ARRAY: ");
  scanf("%d",&n);
  printf("ENTER THE STRING: ");
  scanf("%s",&ar);
  for(j=0;ar[j]!='\0';j++)
  {
    if(ar[j]=='a' || ar[j]=='e' || ar[j]=='i' || ar[j]=='o' || ar[j]=='u')
    v=v+1;
    else
    c=c+1;
  }
  printf("NO. OF VOWEL IS %d",v);
  printf("\nNO. OF CONSONANT IS %d",c);
  getch();
}