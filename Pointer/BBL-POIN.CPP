#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[50],n,i,j,*p,tem;
  clrscr();
  printf("ENTER THE SIZE OF THE ARRAY: ");
  scanf("%d",&n);
  printf("ENTER VALUES IN ARRAY: ");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  for(i=0;i<n;i++)
  {
   p=ar;
   //p=&ar[0];
    for(j=0;j<n-i-1;j++)
    {
      if(*p>*(p+1))
      {
	tem=*p;
	*p=*(p+1);
	*(p+1)=tem;
      }
      p++;
    }
  }
  printf("RESULT OF BUBBLE SORT IS: \n");
  for(i=0;i<n;i++)
  printf("%d ",ar[i]);
  getch();
}