#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[10][10],n,i,j,k,(*p)[10],t=0;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  printf("ENTER VALUES IN ARRAY: ");
  p=ar;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",*(p+i)+j);
  }
  p=ar;
  printf("\nYOUR ARRAY IS: \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    printf("%d ",*(*(p+i)+j));
    printf("\n");
  }
  p=ar;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      for(k=0;k<n-j-1;k++)
      {
      if((*(*(p+i)+k))>(*(*(p+i)+(k+1))))
      {
	t=*(*(p+i)+k);
	*(*(p+i)+k)=*(*(p+i)+(k+1));
	*(*(p+i)+(k+1))=t;
      }
      }
    }
  }
  printf("\nNOW YOUR ARRAY IS: \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    printf("%d ",*(*(p+i)+j));
    printf("\n");
  }
  getch();
}

