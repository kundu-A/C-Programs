#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
typedef struct node
{
  int da;
  struct node *ne;
}nd;
void push();
void pop();
void disp();
nd *hd='\0';
void main()
{
  int ch,a;
  clrscr();
  do
  {
    printf("1.PUSH\t2.POP\t3.DISPLAY\t4.EXIT");
    printf("\nENTER YOUR CHOICE: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: push();
	      break;
      case 2: pop();
	      break;
      case 3: disp();
	      break;
      case 4: exit(0);
      default: printf("\nPLEASE ENETR THE RIGHT CHOICE.");
    }
    printf("\nPRESS '1' TO CONTIUNE....");
    scanf("%d",&a);
  }while(a==1);
  getch();
}
void push()
{
  nd *nw,*temp;
  nw=(nd*)malloc(sizeof(nd));
  nw->ne='\0';
  printf("ENTER A VALUE: ");
  scanf("%d",&nw->da);
  if(hd=='\0')
  hd=nw;
  else
  {
   temp=hd;
   nw->ne=temp;
   hd=nw;
  }
}
void pop()
{
  if(hd!='\0')
  {
    printf("\nTHE POPPED ELEMENT IS: %d",hd->da);
    nd *temp;
    temp=hd;
    hd=temp->ne;
  }
  else
  printf("\nTHE LIST IS EMPTY.POP OPERATION CANNOT BE DONE.");
}
void disp()
{
  if(hd!='\0')
  {
    nd *i;
    for(i=hd;i!='\0';i=i->ne)
    printf("%d ",i->da);
  }
  else
  printf("\nTHE LIST IS EMPTY.");
}