#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
#include<string.h>
typedef struct node
{
  char name[20];
  struct node *ne;
}nd;
nd *hd='\0',*next='\0';
nd *create();
void disp();
void upper();
void lower();
void sort();
void main()
{
  int ch,a;
  clrscr();
  do
  {
    printf("1.INSERT\t2.DISPLAY\t3.UPPER CASE\t4.LOWER CASE\t5.SORT NAME\t6.EXIT");
    printf("\nENTER THE CHOICE: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: if(hd=='\0')
	      hd=next=create();
	      else
	      next=next->ne=create();
	      break;
      case 2: disp();
	      break;
      case 3: upper();
	      break;
      case 4: lower();
	      break;
      case 5: sort();
	      break;
      case 6: exit(0);
      default: printf("\nPLEASE ENTER THE RIGHT CHOICE.");
    }
    printf("\nPRESS '1' TO CONTINUE.....");
    scanf("%d",&a);
  }while(a==1);
  getch();
}
nd *create()
{
  nd *nw;
  nw=(nd*)malloc(sizeof(nd));
  printf("ENTER A NAME: ");
  scanf("%s",&nw->name);
  nw->ne='\0';
  return nw;
}
void disp()
{
  nd *i;
  for(i=hd;i!='\0';i=i->ne)
  printf("%s ",i->name);
}
void upper()
{
  nd *i;
  int len,j;
  for(i=hd;i!='\0';i=i->ne)
  {
    len=strlen(i->name);
    for(j=0;j<len;j++)
    {
      if(i->name[j]>=97 && i->name[j]<=122)
      i->name[j]=i->name[j]-32;
    }
  }
  for(i=hd;i!='\0';i=i->ne)
  printf("%s ",i->name);
}
void lower()
{
  nd *i;
  int len,j;
  for(i=hd;i!='\0';i=i->ne)
  {
    len=strlen(i->name);
    for(j=0;j<len;j++)
    {
      if(i->name[j]>=65 && i->name[j]<=90)
      i->name[j]=i->name[j]+32;
    }
  }
  for(i=hd;i!='\0';i=i->ne)
  printf("%s ",i->name);
}
void sort()
{
  nd *i,*j;
  int len,k,l;
  char temp[20];
  for(i=hd;i!='\0';i=i->ne)
  {
    len=strlen(i->name);
    for(l=0;l<len;l++)
    {
      if(i->name[l]>=65 && i->name[l]<=90)
      i->name[l]=i->name[l]+32;
    }
  }
  for(i=hd;i!='\0';i=i->ne)
  {
    for(j=i->ne;j!='\0';j=j->ne)
    {
      len=strlen(j->name);
      for(k=0;k<len;k++)
      {
	if(i->name[k]>j->name[k])
	{
	  temp=i->name;
	  i->name=j->name;
	  j->name=temp;
	}
      }
    }
  }
  for(i=hd;i!='\0';i=i->ne)
  printf("%s ",i->name);
}