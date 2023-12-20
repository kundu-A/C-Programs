#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *fp;
  char ch;
  int v=0,c=0;
  clrscr();
  fp=fopen("arpan.txt","r");
  while(1)
  {
    ch=fgetc(fp);
    if(ch==EOF)
    break;
    else
    {
      printf("%c",ch);
      if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
      v=v+1;
      else
      c=c+1;
    }
  }
  printf("\nTOTAL NUMBER OF VOWAL IS: %d",v);
  printf("\nTOTAL NUMBER OF CONSONANT IS: %d",c);
  fclose(fp);
  getch();
}