#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,k;
    clrscr();
    printf("ENTER THE RANGE: ");
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
       for(j=i;j<=n;j++)
       printf("%d ",j);
       for(k=1;k<i;k++)
       printf("%d ",k);
       printf("\n");
    }
    getch();
}
