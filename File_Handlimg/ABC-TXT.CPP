#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
void main()
{
  FILE *fp;
  char ar[20];
  clrscr();
  fp=fopen("abc.txt","w");
  if(fp==NULL)
  {
    printf("CAN'T OPEN THIS FILE");
    exit(0);
  }
  printf("\nENTER SOME TEXT: ");
  while(strlen(gets(ar))>0)
  fputs(ar,fp);
  fclose(fp);
  getch();
}
