#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[20],n,i,j,*p,c=0,pos,flag=0;
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
  p=ar;
  for(i=0;i<n;i++)
  {
    flag=0;
    for(j=2;j<=*p/2;j++)
    {
       if(*p%j==0)
       {
	 flag=1;
	 break;
       }
    }
    if(flag==0)
    {
      c++;
      pos=i;
      printf("\nPRIME NUMBER=%d\nPOSITION=%d",*p,pos);
    }
    p++;
  }
  if(c!=0)
  printf("\nTOTAL NUMBER OF PRIME NUMBER IS: %d",c);
  else
  printf("\nTHERE IS NO PRIME IN THIS ARRAY.");
  getch();
}
