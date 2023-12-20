#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<malloc.h>
typedef struct node
{
  int da;
  struct node *ne;
}nd;
nd *hd='\0',*pre='\0';
nd* create();//add new element in the list.
void disp();//display the list.
void front();//add a new node infront of the list.
void ndcount();//count total number of nodes.
void midadd();//to add a node in the middle of the list accroding to position.
void posnode();//to add a new node in that user given position.
void frntdelt();//to delete the first node.
void enddelt();//to delete the last node.
void posdelt();//to delete the given positional node.
void asort();//to sort elements in ascending order.
void dsort();//to sort elements in decending order.
void search();//to search an element in the list.
void main()
{
  int ch,a;
  nd* i;
  clrscr();
  do
  {
     printf("PRESS '1' TO CREATE A LIST\tPRESS '2' TO DISPLAY\tPRESS '3' TO ADD A NEW NODE IN FRONT\tPRESS '4' TO ADD A NEW NODE AT LAST\tPRESS '5' TO COUNT TOTAL NODES\tPRESS '6' TO ADD A NEW NODE\tPRESS '7' TO ADD A NODE AT THAT POSITION\tPRESS '8' TO DELETE THE FIRST ELEMENT\tPRESS '9' TO DELETE THE LAST ELEMENT\tPRESS '10' TO DELETE THE POSITIONAL ELEMENT\tPRESS '11' TO SORT IN ASCENDING ORDER\tPREES '12' TO SORT IN DECENDING ORDER\tPREES '13' TO SEARCH AN ELEMENT IN THE LIST\tPREES '14' TO EXIT: ");
     printf("\nENTER YOUR CHOICE: ");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:if(hd=='\0')
	      hd=pre=create();
	      else
	      {
	      for(i=hd;i->ne!='\0';i=i->ne);
		  i->ne=create();}
	      break;
       case 2:disp();
	      break;
       case 3:front();
	      break;
       case 4:for(i=hd;i->ne!='\0';i=i->ne);
		  i->ne=create();
	      break;
       case 5:ndcount();
	      break;
       case 6:midadd();
	      break;
       case 7:posnode();
	      break;
       case 8:frntdelt();
	      break;
       case 9:enddelt();
	      break;
       case 10:posdelt();
	       break;
       case 11:asort();
	       break;
       case 12:dsort();
	       break;
       case 13:search();
	       break;
       case 14:exit(0);
       default:printf("ENTER RIGHT CHOICE: ");
     }
     printf("\nPRESS '1' TO CONTINUE: ");
     scanf("%d",&a);
  }while(a==1);
  getch();
}
nd* create()
{
  nd* nw;
  nw=(nd*)malloc(sizeof(nd)); //malloc data is type casted as nd*.
  printf("ENTER A VALUE: ");
  scanf("%d",&nw->da);
  nw->ne='\0';
  return nw; //return the whole node to the calling position.
}
void disp()
{
  nd* j;
  printf("LIST ELEMENTS ARE GIVEN BELOW: \n");
  for(j=hd;j!='\0';j=j->ne)
  printf("%d ",j->da);
}
void front()
{
  nd*temp,*head;
  temp=(nd*)malloc(sizeof(nd));
  printf("ENTER A VALUE: ");
  scanf("%d",&temp->da);
  head=hd;
  temp->ne=head;
  hd=temp;
}
void ndcount()
{
   nd* i;
   int c=0;
   for(i=hd;i!='\0';i=i->ne)
   c=c+1;
   printf("\nTOTAL NUMBER OF NODES IS %d",c);
}
void midadd()
{
  int c=0,pos;
  printf("ENTER THE POSITION: ");
  scanf("%d",&pos);
  nd *nw,*i;
  for(i=hd;i!='\0';i=i->ne)
  c=c+1;
  if(c>pos)
  {
    nw=(nd*)malloc(sizeof(nd));
    printf("ENTER THE VALUE: ");
    scanf("%d",&nw->da);
    nw->ne='\0';
    c=0;
    for(i=hd;i!='\0';i=i->ne)
    {
      c=c+1;
      if(c==pos+1)
      nw->ne=i;
    }
    c=0;
    for(i=hd;i!='\0';i=i->ne)
    {
      c=c+1;
      if(c==pos)
      i->ne=nw;
    }
  }
  else
  printf("THIS POSITON IS WRONG OR THE LIST IS EMPTY.");
}
void posnode()
{
  nd *nw,*i;
  int c=0,pos;
  for(i=hd;i!='\0';i=i->ne)
  c=c+1;
  printf("POSITION IS MUST BE LESS THEN %d.",c);
  printf("ENTER THE POSITION: ");
  scanf("%d",&pos);
  if(c>pos)
  {
    nw=(nd*)malloc(sizeof(nd));
    printf("\nENTER A VALUE: ");
    scanf("%d",&nw->da);
    nw->ne='\0';
    c=0;
    for(i=hd;i!='\0';i=i->ne)
    {
      c=c+1;
      if(c==pos-1)
      {
	nw->ne=i->ne;
	i->ne=nw;
      }
    }
  }
  else
  printf("\nPOSITION IS WRONG OR THE LIST IS EMPTY.");
}
void frntdelt()
{
  nd* temp;
  if(hd=='\0')
  printf("THE LIST IS EMPTY.");
  else
  {
    temp=hd;
    hd=temp->ne;
  }
}
void enddelt()
{
  nd *i;
  if(hd=='\0')
  printf("THE LIST IS EMPTY.");
  else
  {
    for(i=hd;i->ne->ne!='\0';i=i->ne);
    i->ne='\0';
  }
}
void posdelt()
{
  int pos,c=0;
  printf("ENTER THE POSITION: ");
  scanf("%d",&pos);
  if(hd=='\0')
  printf("THE LIST IS EMPTY.");
  else
  {
    nd *i;
    for(i=hd;i->ne!='\0';i=i->ne)
    {
      c=c+1;
      if(c==pos-1)
      i->ne=i->ne->ne;
    }
  }
}
void asort()
{
  nd *i,*j;
  int temp;
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
  printf("\nSORTED ARRAY: ");
  for(i=hd;i!='\0';i=i->ne)
  printf("%d ",i->da);
}
void dsort()
{
  nd *i,*j;
  int temp;
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
  printf("\nSORTED ARRAY: ");
  for(i=hd;i!='\0';i=i->ne)
  printf("%d ",i->da);
}
void search()
{
  int flag=0,srch;
  nd *i;
  printf("ENTER AN ELEMENT FOR SEARCHING: ");
  scanf("%d",&srch);
  for(i=hd;i!='\0';i=i->ne)
  {
    if(srch==i->da)
    {
      printf("%d IS FOUND.",i->da);
      flag=1;
    }
  }
  if(flag==0)
  printf("%d IS NOT FOUND.",srch);
}











