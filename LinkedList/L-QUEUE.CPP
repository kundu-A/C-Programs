#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
typedef struct node
{
  int da;
  struct node *ne;
}nd;
nd* hd='\0',*i='\0';
void insrt();
void delt();
void disp();
void main()
{
 int ch,a;
 clrscr();
 do
 {
   printf("1.INSERT\t2.DELETE\t3.DRSPLAY\t4.EXIT");
   printf("\nPLEASE ENTER YOUR CHOICE: ");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1: insrt();
	     break;
     case 2: delt();
	     break;
     case 3: disp();
	     break;
     case 4: exit(0);
     default: printf("\nPLEASE ENTER RIGHT CHOICE.");
   }
   printf("\nPRESS '1' TO CONTINUE....");
   scanf("%d",&a);
 }while(a==1);
 getch();
}
void insrt()
{
  nd *nw;
  nw=(nd*)malloc(sizeof(nd));
  nw->ne='\0';
  printf("\nENTER A VALUE: ");
  scanf("%d",&nw->da);
  if(hd=='\0')
  hd=nw;
  else
  {
    for(i=hd;i->ne!='\0';i=i->ne);
    i=i->ne=nw;
  }
}
void delt()
{
  nd *temp;
  if(hd!='\0')
  {
    printf("\nTHE DELETED ELEMENT IS: %d",hd->da);
    temp=hd;
    hd=temp->ne;
  }
  else
  printf("\nTHE LIST IS EMPTY.DELETE OPERATION CANNOT BE DONE.");
}
void disp()
{
  if(hd=='\0')
  printf("\nTHE LIST IS EMPTY.");
  else
  {
    for(i=hd;i!='\0';i=i->ne)
    printf("%d ",i->da);
  }
}
