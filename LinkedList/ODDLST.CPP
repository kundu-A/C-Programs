#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<malloc.h>
typedef struct node
{
  int da;
  struct node *ne;
}nd;
nd *hd='\0';
nd *next='\0';
nd *create();
void disp();
void oddlist();
void evenlist();
void sort();
void main()
{
  nd *i;
  int ch,a;
  clrscr();
  do
  {
    printf("PRESS '1' TO CREATE A LIST\tPRESS '2' TO DISPLAY THE LIST\tPRESS '3' TO CREATE A ODD LIST AND PRINT IT\tPRESS '4' TO CREATE A EVEN LIST AND PRINT IT\tPRESS '5' TO SORT THE LIST\tPRESS '6' TO EXIT: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:if(hd=='\0')
	     hd=next=create();
	     else
	     next=next->ne=create();
	     break;
      case 2:disp();
	     break;
      case 3:oddlist();
	     break;
      case 4:evenlist();
	     break;
      case 5:sort();
	     break;
      case 6:exit(0);
      default:printf("ENTER THE RIGHT CHOICE.");
    }
    printf("\nPRESS '1' TO CONTINUE.");
    scanf("%d",&a);
  }while(a==1);
  getch();
}
nd *create()
{
  nd *nw;
  nw=(nd*)malloc(sizeof(nd));
  printf("ENTER A VALUE: ");
  scanf("%d",&nw->da);
  nw->ne='\0';
  return nw;
}
void disp()
{
  nd *i;
  printf("\nLIST ELEMENTS ARE GIVEN BELOW.\n");
  for(i=hd;i!='\0';i=i->ne)
  printf("%d ",i->da);
}
void oddlist()
{
  nd *hd2='\0',*next2='\0';
  nd *nw,*i,*j;
  for(i=hd;i!='\0';i=i->ne)
  {
    if(i->da%2!=0)
    {
      nw=(nd*)malloc(sizeof(nd));
      nw->ne='\0';
      nw->da=i->da;
      if(hd2=='\0')
      hd2=next2=nw;
      else
      next2=next2->ne=nw;
    }
  }
  for(j=hd2;j!='\0';j=j->ne)
  printf("%d ",j->da);
}
void evenlist()
{
  nd *hd3='\0',*next3='\0';
  nd *nw,*i,*j;
  for(i=hd;i!='\0';i=i->ne)
  {
    if(i->da%2==0)
    {
      nw=(nd*)malloc(sizeof(nd));
      nw->ne='\0';
      nw->da=i->da;
      if(hd3=='\0')
      hd3=next3=nw;
      else
      next3=next3->ne=nw;
    }
  }
  for(j=hd3;j!='\0';j=j->ne)
  printf("%d ",j->da);
}
void sort()
{
  nd *temphd='\0',*i,*j;
  int t;
  for(i=hd;i!='\0';i=i->ne)
  {
    temphd=i->ne;
    for(j=temphd;j!='\0';j=j->ne)
    {
      if(i->da>j->da)
      {
	t=i->da;
	i->da=j->da;
	j->da=t;
      }
    }
  }
  for(i=hd;i!='\0';i=i->ne)
  printf("%d ",i->da);
}