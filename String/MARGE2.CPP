#include<stdio.h>
#include<conio.h>
int ar[20];
void mrg_srt(int,int);
void mrg(int,int,int);
void main()
{
  int i,j,n;
  clrscr();
  printf("ENTER THE SIZE OF THE ARRAY: ");
  scanf("%d",&n);
  printf("ENTER ELEMENTS IN ARRAY: ");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  mrg_srt(0,n-1);
  printf("\nSORTED ARRAY IS: ");
  for(i=0;i<n;i++)
  printf("%d ",ar[i]);
  getch();
}
void mrg_srt(int low,int high)
{
   int mid;
   if(low!=high)
   {
      mid=(low+high)/2;
      mrg_srt(low,mid);
      mrg_srt(mid+1,high);
      mrg(low,mid,high);
   }
}
void mrg(int low,int mid,int high)
{
  int temp[20],i=low,k=low,j=mid+1;
  while((i<=mid) && (j<=high))
  {
    if(ar[i]<ar[j])
    temp[k++]=ar[i++];
    else
    temp[k++]=ar[j++];
  }
  while(i<=mid)
  temp[k++]=ar[i++];
  while(j<=high)
  temp[k++]=ar[j++];
  for(i=low;i<=high;i++)
  ar[i]=temp[i];
}
