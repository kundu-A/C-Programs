#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,j,k,l,m,p,t,q;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    printf(" ");
    for(k=1;k<=i;k++)
    printf("%d",k);
    for(l=i-1;l>=1;l--)
    printf("%d",l);
    printf("\n");
  }
  for(m=1;m<=n-1;m++)
  {
   for(p=1;p<=m;p++)
   printf(" ");
   for(t=1;t<=n-m;t++)
   printf("%d",t);
   for(q=n-1-m;q>=1;q--)
   printf("%d",q);
   printf("\n");
  }
  getch();
}


