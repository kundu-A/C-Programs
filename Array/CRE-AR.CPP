#include<stdio.h>
#include<conio.h>
void array(int ar[],int);
int ar[10];
//int j=0;
void main()
{
  int n,i;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  array(ar,n-1);
  printf("YOUR ARRAY IS:\n");
  for(i=0;i<n;i++)
  printf("%d ",ar[i]);
  getch();
}
void array(int ar[],int n)
{
 // int v=0;
  if(n>=0)
  {
    array(ar,n-1);
    printf("ENTER A VALUE: ");
    scanf("%d",&ar[n]);
    //scanf("%d",&v);
   // ar[j++]=v;
  }
}

