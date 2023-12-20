#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[20][20],r,c,i,j,od=0,ev=0;
  clrscr();
  printf("ENTER THE SIZE OF ROW: ");
  scanf("%d",&r);
  printf("ENTER THE SIZE COLUMN: ");
  scanf("%d",&c);
  printf("ENTER THE VALUES OF MATRIX: ");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    scanf("%d",&ar[i][j]);
  }
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
     if(ar[i][j]%2==0)
     ev=ev+1;
     else
     od=od+1;
    }
  }
  printf("TOTAL NUMBER OF ODD IS %d",od);
  printf("\nTOTAL NUMBER OF EVEN IS %d",ev);
  getch();
}
