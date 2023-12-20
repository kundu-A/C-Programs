#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,c=0,flag=0;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=2;i<=n;i++)
  {
    flag=0;
    for(j=2;j<i;j++)
    {
      if(i%j==0)
      {
	flag=1;
	break;
      }
    }
    if(flag==0)
    c=c+1;
  }
  printf("%d",c);
  getch();
}
