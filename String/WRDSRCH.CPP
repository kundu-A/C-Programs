#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,j,sl,wl,l,c=0,k,flag=0,s;
  char wrd[10],str[50],ar[10];
  clrscr();
  printf("ENTER THE STRING:\n");
  gets(str);
  sl=strlen(str);
  printf("ENTER THE SEARCHING WORD:\n") ;
  gets(wrd);
  wl=strlen(wrd);
  for(i=0;i<sl;i++)
  {
    if(str[i]==' ')
    c=c+1;
  }
  c=c+1;
  printf("NUMBER OF WORDS IN THE STRING: %d",c);
  printf("POSITION OF WORD:\n");
  for(i=0;i<sl;i++)
  {
    if(str[i]!=' ')
    ar[i]=str[i];
    else
    i=i+1;
    l=strlen(ar);
    for(j=1;j<=c;j++)
    {
      if(l==wl)
      {
	for(k=0;k<l;k++)
	{
	  if(ar[k]==wrd[k])
	  {
	    flag=1;
	    s=j;
	  }
	  else
	  {
	     flag=0;
	     break;
	  }
	}
      }
      else
      {
	j=j+1;
	break;
      }
    }
    if(flag==1)
    printf("%d ",s);
  }
  getch();
}




