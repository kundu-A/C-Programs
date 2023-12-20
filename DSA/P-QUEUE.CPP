#include<stdio.h>
#include<conio.h>
#include<process.h>
int ar[10],f=-1,n,r=-1;
void insrt(int);
void dlt();
void disp();
void main()
{
  int ch,da;
  clrscr();
  printf("ENTER THE RANGE OF THE ARRAY:");
  scanf("%d",&n);
  while(1)
  {
    printf("\n1.INSERT\t2.DELETE\t3.DISPLAY\t4.EXIT");
    printf("\nENTER THE CHOICE: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("\nENTER A VALUE: ");
	      scanf("%d",&da);
	      insrt(da);
	      printf("\nFRONT=%d\tREAR=%d",f,r);
	      break;
      case 2: dlt();
	      printf("\nFRONT=%d\tREAR=%d",f,r);
	      break;
      case 3: disp();
	      break;
      case 4: exit(0);
      default: printf("\nPLEASE ENTER THE RIGHT CHOICE.");
    }
  }
}void insrt(int da)
{
  int i,swap;
  if(r==n-1)
  printf("THE QUEUE IS FULL");
  else
  {
    if(r==-1)
    {
      ar[++r]=da;
      f=0;
    }
    else
    {
      for(i=f;i<=r;i++)
      {
	if(da<ar[i])
	{
	  swap=ar[i];
	  ar[i]=da;
	  da=swap;
	}
      }
      ar[++r]=da;
    }
  }
}
void dlt()
{
  int temp;
  if((f==-1 && r==-1) || (f==r+1))
  printf("THE QUEUE IS EMPTY.");
  else
  {
    temp=ar[f++];
    printf("THE DELETED ITEM IS %d",temp);
    if(f==r+1)
    f=r=-1;
  }
}
void disp()
{
  int i;
  if((f==-1 && r==-1) || (f==r+1))
  printf("THE QUEUE IS EMPTY.");
  else
  {
    for(i=f;i<=r;i++)
    printf("%d ",ar[i]);
  }
}
