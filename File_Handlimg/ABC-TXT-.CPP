#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *fp;
  char ch;
  fp=fopen("abc.txt","r");
  while(1)
  {
    ch=fgetc(fp);
    if(ch==EOF)
    break;
    else
    printf("%c",ch);
  }
  fclose(fp);
  getch();
}