#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
void capital(char [],int);
void small(char [],int);
void main()
{
  char str[50];
  int ch,a,l;
  clrscr();
  printf("ENTER THE STRING: \n");
  gets(str);
  l=strlen(str);
  do
  {
    printf("ENTER YOUR CHOICE: \n");
    printf("1.ALL IN CAPITAL.\t2.all in small.\t3.EXIT.: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:capital(str,l);
	     break;
      case 2:small(str,l);
	     break;
      case 3:exit(0);
      default:printf("PLEASE ENTER THE RIGHT CHOICE.");
    }
    printf("PRESS '1' TO CONTINUE.....: ");
    scanf("%d",&a);
  }while(a==1);
}
void capital(char str[],int l)
{
   int i,temp;
   for(i=0;i<l;i++)
   {
     if(str[i]!=' ');
     {
       temp=str[i];
       if(str[i]>=97 && str[i]<=122)
       str[i]=(temp-32);
     }
   }
   puts(str);
}
void small(char str[],int l)
{
  int i,temp;
  for(i=0;i<l;i++)
  {
    if(str[i]!=' ');
    {
      temp=str[i];
      if(str[i]>=65 && str[i]<=122)
      str[i]=(temp+32);
    }
  }
  puts(str);
}
