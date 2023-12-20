#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<malloc.h>
typedef struct node
{
  struct node *pre;
  int da;
  struct node *ne;
}nd;
nd *hd='\0',*next='\0';
nd *create();//Create a list with new elements.
void backdisp();//Display the list in reverse order.
void disp();//Display the list in normal form(forword).
void frntinsert();//To add a new element in the front of the list.
void endinsert();//To add a new element in the end of the list.
void posinsert();//To add a new element in the user given position.
void frntdelt();//To delete the first element of the list.
void enddelt();//To delete the last element of the list.
void posdelt();//To delete the user given positional value.
void oddlst();//To create a list with odd numbers from the main list.
void evenlst();//To create a list with even numbers from the main list.
void asort();//To sort elements in assending order.
void dsort();//To sort elements in descending order.
void search();
void main()
{
  nd *i;
  int ch,a;
  clrscr();
  do
  {
    printf("PRESS '1' TO CREATE A LIST\tPRESS '2' TO DISPLAY IN BACK\tPRESS '3' TO DISPLAY\tPRESS '4' TO ADD A NEW NODE AT FRONT\tPRESS '5' TO ADD A NODE AT LAST\tPRESS '6' TO ADD A NODE IN THE USER GIVEN POSITION\tPRESS '7' TO DELETE THE FRONT NODE\tPRESS '8' TO DELETE THE END NODE\tPRESS '9' TO DELETE THE USER GIVEN POSITION NODE\tPRESS '10' TO CREATE A ODD LIST AND PRINT IT\tPRESS '11' TO CREATE A EVEN LIST AND PRINT IT\tPRESS '12' TO SORT IN ASSENDING ORDER\tPRESS '13' TO SORT IN DESCENDING ORDER\tPRESS '14' TO SEARCH THE ELEMENT\tPRESS '15' TO EXIT: ");
    printf("\nENTER YOUR CHOICE: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:if(hd=='\0')
	     hd=next=create();
	     else
	     {
	     for(i=hd;i->ne!='\0';i=i->ne);
	     next=i;
	     next=next->ne=create();
	     }
	     break;
      case 2:backdisp();
	     break;
      case 3:disp();
	     break;
      case 4:frntinsert();
	     break;
      case 5:endinsert();
	     break;
      case 6:posinsert();
	     break;
      case 7:frntdelt();
	     break;
      case 8:enddelt();
	     break;
      case 9:posdelt();
	     break;
      case 10:oddlst();
	      break;
      case 11:evenlst();
	      break;
      case 12:asort();
	      break;
      case 13:dsort();
	      break;
      case 14:search();
	       break;
      case 15:exit(0);
      default:printf("ENTER THE RIGHT CHOICE: ");
    }
    printf("\nPRESS '1' TO CONTINUE: ");
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
  if(hd=='\0')
  nw->pre='\0';
  else
  nw->pre=next;
  return nw;
}
void backdisp()
{
  nd *i,*temp,*j;
  for(i=hd;i->ne!='\0';i=i->ne);
  temp=i;
  for(j=temp;j!='\0';j=j->pre)
  printf("%d ",j->da);
}
void disp()
{
  nd *i;
  for(i=hd;i!='\0';i=i->ne)
  printf("%d ",i->da);
}
void frntinsert()
{
  nd *nw,*temp;
  nw=(nd*)malloc(sizeof(nd));
  printf("ENTER A VALUE: ");
  scanf("%d",&nw->da);
  nw->pre='\0';
  temp=hd;
  temp->pre=nw;
  nw->ne=temp;
  hd=nw;
}
void endinsert()
{
  nd *nw,*i,*temp;
  nw=(nd*)malloc(sizeof(nd));
  for(i=hd;i->ne!='\0';i=i->ne);
  temp=i;
  printf("ENTER A VALUE: ");
  scanf("%d",&nw->da);
  nw->ne='\0';
  nw->pre=temp;
  temp->ne=nw;
}
void posinsert()
{
  nd *nw,*i,*p;
  int c=0,pos;
  for(i=hd;i!='\0';i=i->ne)
  c=c+1;
  printf("ENTER THE POSITION IN THE RANGE OF %d",c);
  printf("\nENTER THE POSITION: ");
  scanf("%d",&pos);
  if(pos<=c)
  {
    nw=(nd*)malloc(sizeof(nd));
    printf("ENTER A VALUE: ");
    scanf("%d",&nw->da);
    nw->pre='\0';
    nw->ne='\0';
    c=0;
    for(i=hd;i!='\0';i=i->ne)
    {
      c=c+1;
      if(c==pos-1)
      {
	nw->pre=i;
	p=i->ne;
	i->ne=nw;
	nw->ne=p;
	p->pre=nw;
      }
    }
  }
  else
  printf("ENTER THE PROPER SIZE.");
}
void frntdelt()
{
  nd *head;
  head=hd;
  hd=head->ne;
  hd->pre='\0';
}
void enddelt()
{
  nd *i;
  for(i=hd;i->ne->ne!='\0';i=i->ne);
  i->ne='\0';
}
void posdelt()
{
  nd *i;
  int c=0,pos;
  for(i=hd;i!='\0';i=i->ne)
  c=c+1;
  printf("ENTER THE POSITION IN BETWEEN THE RANGE %d.",c);
  printf("ENTER THE POSITION: ");
  scanf("%d",&pos);
  c=0;
  for(i=hd;i!='\0';i=i->ne)
  {
    c=c+1;
    if(c==pos-1)
    {
      i->ne->ne->pre=i;
      i->ne=i->ne->ne;

    }
  }
}
void oddlst()
{
  nd *hd2='\0',*next2='\0',*nw,*i;
  if(hd=='\0')
  printf("MAIN LIST IS EMPTY, SO MAKE A ODD LIST IS NOT POSSIBLE.");
  else
  {
    for(i=hd;i!='\0';i=i->ne)
    {
      if(i->da%2!=0)
      {
	nw=(nd*)malloc(sizeof(nd));
	nw->da=i->da;
	nw->ne='\0';
	nw->pre='\0';
	if(hd2=='\0')
	hd2=next2=nw;
	else
	{
	  nw->pre=next2;
	  next2=next2->ne=nw;
	}
      }
    }
    if(hd2=='\0')
    printf("\nTHERE IS NO ODD ELEMENT IN THE LIST.");
    else
    {
      printf("\nODD ELEMENTS ARE GIVEN BELOW\n");
      for(i=hd2;i!='\0';i=i->ne)
      printf("%d ",i->da);
    }
  }
}
void evenlst()
{
  nd *hd2='\0',*next2='\0',*nw,*i;
  if(hd=='\0')
  printf("MAIN LIST IS EMPTY, SO MAKE A EVEN LIST IS NOT POSSIBLE.");
  else
  {
    for(i=hd;i!='\0';i=i->ne)
    {
      if(i->da%2==0)
      {
	nw=(nd*)malloc(sizeof(nd));
	nw->da=i->da;
	nw->ne='\0';
	nw->pre='\0';
	if(hd2=='\0')
	hd2=next2=nw;
	else
	{
	  nw->pre=next2;
	  next2=next2->ne=nw;
	}
      }
    }
    if(hd2=='\0')
    printf("\nTHERE IS NO EVEN ELEMENT IN THE LIST.");
    else
    {
      printf("\nEVEN ELEMENTS ARE GIVEN BELOW\n");
      for(i=hd2;i!='\0';i=i->ne)
      printf("%d ",i->da);
    }
  }
}
void asort()
{
  nd *i,*j;
  int temp;
  if(hd=='\0')
  printf("LIST IS EMPTY , SORTING OPERATION CANNOT BE DONE.");
  else
  {
     for(i=hd;i!='\0';i=i->ne)
     {
       for(j=i->ne;j!='\0';j=j->ne)
       {
	 if(i->da>j->da)
	 {
	    temp=i->da;
	    i->da=j->da;
	    j->da=temp;
	 }
       }
     }
     for(i=hd;i!='\0';i=i->ne)
     printf("%d ",i->da);
  }
}


void dsort()
{
  nd *i,*j;
  int temp;
  if(hd=='\0')
  printf("LIST IS EMPTY , SORTING OPERATION CANNOT BE DONE.");
  else
  {
     for(i=hd;i!='\0';i=i->ne)
     {
       for(j=i->ne;j!='\0';j=j->ne)
       {
	 if(i->da<j->da)
	 {
	    temp=i->da;
	    i->da=j->da;
	    j->da=temp;
	 }
       }
     }
     for(i=hd;i!='\0';i=i->ne)
     printf("%d ",i->da);
  }
}
void search()
{
  int flag=0,srch;
  nd *i;
  printf("ENTER AN ELEMENT FOR SEARCHING: ");
  scanf("%d",&srch);
  if(hd!='\0')
  {
    for(i=hd;i!='\0';i=i->ne)
    {
      if(srch==i->da)
      {
	printf("%d IS FOUND.",i->da);
	flag=1;
	break;
      }
    }
  }
  else
  printf("THE LIST IN NOT CREATED.");
  if(flag==0)
  printf("THE ELEMENT IS NOT FOUND.");
}
