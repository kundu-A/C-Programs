#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[20],ar1[20],n,i,*p1,*p;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  p=ar;
  for(i=0;i<n;i++)
  {
    scanf("%d",p);
    p++;
  }
  p=ar;
  for(i=0;i<n;i++)
  {
    printf("%d ",*p);
    p++;
  }
  p=ar;
  p1=ar1;
  for(i=0;i<n;i++)
  {
    *p1=*p;
    p++;
    p1++;
  }
  p1=ar1;
  printf("\n");
  for(i=0;i<n;i++)
  {
    printf("%d ",*p1);
    p1++;
  }
  getch();
}