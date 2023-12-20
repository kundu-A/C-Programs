#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[50],n,i,*p,l=0;
  clrscr();
  printf("ENTER THE SIZE OF ARRAY:");
  scanf("%d",&n);
  printf("ENTER DIGIT OF ARRAY:");
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  p=&ar[0];
  //p=ar;
  for(i=0;i<n;i++)
  {
    if(*p>l)
    //if(*p>*(p+1));
    l=*p;
    p++;
  }
  printf("THE LAGREST VALUE= %d",l);
  getch();
}