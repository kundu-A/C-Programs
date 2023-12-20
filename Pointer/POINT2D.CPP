#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[10][10],n,i,j,(*p)[10];
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  printf("ENTER VALUES IN ARRAY: ");
  p=ar;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",*(p+i)+j);
    //scanf("%d",&ar[i][j]);
  }
  p=ar;
  printf("\nYOUR ARRAY IS: \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    printf("%d\t",*(*(p+i)+j));
    printf("\n");
  }
  printf("\nENTER THE SIZE OF ROW: ");
  scanf("%d",&i);
  printf("\nENTER THE SIZE OF COLUMN: ");
  scanf("%d",&j);
  printf("%d",*(*(p+i)+j));
  printf("\n%u",*(p+i)+j);
  printf("\nDIAGONALI ELEMENTS ARE: \n");
  p=ar;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i==j)
      printf("%d",*(*(p+i)+j));
    }
    printf("\n");
  }
  getch();
}
