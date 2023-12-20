#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,a[20][20],b[20][20],c[20][20],d=0,r1,r2,c1,c2,k;
 clrscr();
 printf("NOTE:- PLEASE MIND IT 1st MATRIX ROW IS EQUAL TO THE 2nd MATRIX COLUMN.");
 printf("ENTER THE SIZE OF ROW FOR 1`st MATRIX: ");
 scanf("%d",&r1);
 printf("ENTER THE SIZE OF COLUMN FOR 1'st MATRIX: ");
 scanf("%d",&c1);
 printf("ENTER THE VALUES IN 1st MATRIX: \n");
 for(i=0;i<r1;i++)
 {
   for(j=0;j<c1;j++)
   scanf("%d",&a[i][j]);
 }
 printf("YOUR 1st MATRIX IS: \n");
 for(i=0;i<r1;i++)
 {
  for(j=0;j<c1;j++)
  printf("\t%d",a[i][j]);
  printf("\n");
  }
  printf("ENTER THE SIZE OF ROW FOR 2'nd MATRIX: ");
  scanf("%d",&r2);
  printf("ENTER THE SIZE OF COLUMN FOR 2'nd MATRIX: ");
  scanf("%d",&c2);
  printf("ENTER THE VALUE OF 2nd MATRIX: \n");
  for(i=0;i<r2;i++)
 {
   for(j=0;j<c2;j++)
   scanf("%d",&b[i][j]);
 }

 printf("YOUR 2nd MATRIX IS: \n");
 for(i=0;i<r2;i++)
 {
   for(j=0;j<c2;j++)
   printf("\t%d",b[i][j]);
   printf("\n");
 }
 if(r1==c2)
 {
 for(k=0;k<r2;k++)
 {
   for(i=0;i<r2;i++)
   { d=0;
     for(j=0;j<c2;j++)
     d=d+(a[k][j]*b[j][i]);
     c[k][i]=d;
   }
 }
 printf("RESULT OF THE MULTIPLICATION: \n");
 for(k=0;k<r2;k++)
 {
   for(i=0;i<c2;i++)
   printf("\t%d",c[k][i]);
   printf("\n");
 }
 }
 else
 printf("THIS MULTIPLICATION IS NOT POSSIBLE.");
 getch();
}