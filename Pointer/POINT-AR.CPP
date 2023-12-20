#include<stdio.h>
#include<conio.h>
void main()
{
  int  ar[20],n,i,*p;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  printf("ENTER ELEMENTS IN ARRAY: ");
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
  getch();
}
