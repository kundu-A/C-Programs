#include<stdio.h>
#include<conio.h>
void main()
{
  int  ar[10][10],n,*p,*q,i,j;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  (p+q)=ar;
  printf("ENTER VALUES IN ARRAY: ");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",p+q);
      q++;
    }
    p++;
  }
  printf("YOUR ARRAY IS: \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d",*(p+q));
      q++;
    }
    p++;
  }
  getch();
}

