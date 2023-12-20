#include<stdio.h>
#include<conio.h>
void main()
{
  int ar1[20],ar2[20],ar3[20],n,i,j,k=0;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  printf("ENTER VAKUES IN ARRAY:");
  for(i=0;i<n;i++)
  scanf("%d",&ar1[i]);
  printf("ENTER VALUES IN 2nd ARRAY: ");
  for(i=0;i<n;i++)
  scanf("%d",&ar2[i]);
  for(i=0;i<n;i++)
  {
    if(ar1[i]%2!=0 && ar1[i]!='\0')
    {
      for(j=i;j<n;j++)
      {
	if(ar2[j]%2!=0 && ar2[j]!='\0')
	{
	  ar3[k++]=ar1[i]+ar2[j];
	  ar1[i]='\0';
	  ar2[j]='\0';
	  break;
	}
      }
    }
  }
  for(i=0;i<k;i++)
  printf("%d ",ar3[i]);
  getch();
}


