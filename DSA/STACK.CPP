#include<stdio.h>
#include<conio.h>
#include<process.h>
int n,t=-1;
void push(int ar[],int);
void pop();
void disp(int ar[]);
void main()
{
  int ch,da,a,ar[20];
  clrscr();
  printf("ENTER THE SIZE OF ARRAY: ");
  scanf("%d",&n);
  do
  {
    printf("PRESS '1' TO PUSH\tPRESS '2' TO POP\tPRESS '3' TO DISPLAY\tPRESS '4'TO EXIT\n");
    scanf("%d",&ch);
    switch (ch)
    {
      case 1:
      printf("ENTER A VALUE TO BE PUSHED: ");
      scanf("%d",&da);
      push(ar,da);
      break;
      case 2:
      pop();
      break;
      case 3:
      disp(ar);
      break;
      case 4:
      exit(0);
      break;
      default:
      printf("\nENTER THE RIGHT CHOICE: ");
    }
    printf("\nPRESS '1' TO CONTINUE: ");
    scanf("%d",&a);
  }while(a==1);
  getch();
}
void push(int ar[],int da)
{
  if(t==n-1)
  printf("\nTHE STACK IS FULL");
  else
  ar[++t]=da;
}
void pop()
{
  if(t==-1)
  printf("\nTHE STACK IS EMPTY");
  else
  --t;
}
void disp(int ar[])
{
  int i;
  for(i=0;i<=t;i++)
  printf("%d ",ar[i]);
}