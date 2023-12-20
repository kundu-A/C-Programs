#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,ar1[20],ar2[20],ar3[20],ar4[20],k=0;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  printf("ENTER VALUES IN 1st ARRAY: ");
  for(i=0;i<n;i++)
  scanf("%d",&ar1[i]);
  printf("ENTER VALUES IN 2nd ARRAY: ");
  for(i=0;i<n;i++)
  scanf("%d",&ar2[i]);
  for(i=0;i<n;i++)
  ar3[i]=ar1[i]+ar2[i];
  printf("AFTER ADDITION OF TWO ARRAY: \n");
  for(i=0;i<n;i++)
  printf("%d ",ar3[i]);
  for(i=0;i<n;i++)
  {
    if(ar3[i]%2!=0)
    ar4[k++]=ar3[i];
  }
  for(i=0;i<n;i++)
  {
     if(ar3[i]%2==0)
     ar4[k++]=ar3[i];
  }
  printf("\nAFTER REARRANGE THE ARRAY AS ODD 1st AND EVEV 2nd SIMULTANIOUSLY:\n");
  for(i=0;i<n;i++)
  printf("%d ",ar4[i]);
  getch();
}
