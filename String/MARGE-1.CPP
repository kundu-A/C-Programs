#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[20],n,ar1[10],n1,ar2[10],n2,i,j,k;
  clrscr();
  printf("ENTER THE RANGE OF THE 1st ARRAY: ");
  scanf("%d",&n1);
  printf("ENTER VALUES IN 1st ARRAY: ");
  for(i=0;i<n1;i++)
  scanf("%d",&ar1[i]);
  printf("ENTER THE RANGE OF THE 2nd ARRAY: ");
  scanf("%d",&n2);
  printf("ENTER VALUES IN 2nd ARRAY: ");
  for(i=0;i<n2;i++)
  scanf("%d",&ar2[i]);
  n=n1+n2;
  i=0;
  j=0;
  k=0;
  while(i<n1 && j<n2)
  {
     if(ar1[i]<ar2[j])
     ar[k++]=ar1[i++];
     else
     ar[k++]=ar2[j++];
  }
  while(i<n1)
  ar[k++]=ar1[i++];
  while(j<n2)
  ar[k++]=ar2[j++];
  printf("THE SORTED MARGED ARRAY IS : ");
  for(i=0;i<n;i++)
  printf("%d ",ar[i]);
  getch();
}


