#include<stdio.h>
#include<conio.h>
#include<process.h>
void inst(int ar[],int);
void delt(int ar[]);
void disp(int ar[]);
int r=-1,f=-1,n;
void main()
{
   int ar[20],d,l,ch;
   clrscr();
   printf("ENTER THE RANGE OF ARRAY: ");
   scanf("%d",&n);
   do
   {
     printf("\nPRESS '1' TO INSERT\tPRESS '2' TO DELETE\tPRESS '3' TO DISPLAY\tPRESS '4' TO EXIT");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:
       printf("\nENTER AN ELIMENT TO INSERT: ");
       scanf("%d",&d);
       inst(ar,d);
       break;
       case 2:
       delt(ar);
       break;
       case 3:
       disp(ar);
       break;
       case 4:
       exit(0);
       break;
       default:
       printf("\nPLEASE ENTER THE RIGHT CHOICE: ");
     }
     printf("\nPRESS '1' TO CONTINUE: ");
     scanf("%d",&l);
   }while(l==1);
   getch();
}
void inst(int ar[],int d)
{
   if(r==n-1)
   printf("\nTHE QUEUE IS FULL");
   else
   ar[++r]=d;
}
void delt(int ar[])
{
  if(f==r)
  printf("\nTHE QUEUE IS EMPTY");
  else
  {
    ar[++f]='\0';
    if(f==r)
    f=r=-1;
  }
}
void disp(int ar[])
{
  int i;
  for(i=f+1;i<=r;i++)
  printf("%d ",ar[i]);
}