#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],number,i,j,temp;
clrscr();
printf("\n please enter the total no. of elements: ");
scanf("%d",&number);
printf("\n please enter the any elements");
for(i=0;i<number;i++)
 scanf("%d",&a[i]);
for(i=0;i<number-1;i++)
{
 for(j=0;j<number-i-1;j++)
 {
  if(a[j]>a[j+1])
  {
   temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
  }
 }
}
printf("\n list sorted in ascending order: ");
for(i=0;i<number;i++)
 printf("%d\t",a[i]);
printf("\n");
getch();
}

