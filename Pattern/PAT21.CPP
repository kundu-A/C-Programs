#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k,l,m,p;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n-i;j++)
     printf(" ");
     for(k=1;k<=i*2-1;k++)
     {
       if(k==1 || k==i*2-1)
       printf("%d",1);
       else
       printf(" ");
     }
     printf("\n");
  }
  for(l=n-1;l>=1;l--)
  {
     for(m=1;m<=n-l;m++)
     printf(" ");
     for(p=1;p<=l*2-1;p++)
     {
	if(p==1 || p==l*2-1)
	printf("%d",1);
	else
	printf(" ");
     }
     printf("\n");
  }
  getch();
}