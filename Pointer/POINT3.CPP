#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[20],n,i,*p;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  p=ar;
  printf("ENTER VALUES IN ARRAY: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",p);
    p++;
  }
  p=ar;
  printf("\nYOUR ARRAY IS: \n");
  for(i=0;i<n;i++)
  {
     printf("%d ",*p);
     p++;
  }
  p=&ar[n-1];
  printf("\nAFTER REVERING THE ARRAY: \n");
  for(i=0;i<n;i++)
  {
     printf("%d ",*p);
     p--;
  }
  getch();
}
