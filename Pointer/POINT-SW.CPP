#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,*p1,*p2,ad;
  clrscr();
  printf("ENTER TWO NUMBER: ");
  scanf("%d%d",&a,&b);
  printf("1st digit=%d and 2nd digit=%d",a,b);
  p1=&a;
  p2=&b;
  ad=*p1+*p2;
  printf("\nTHE ADDITION=%d",ad);
  *p1=ad-*p1;
  *p2=ad-*p2;
  printf("\nAFTER SWAPPING VALUES:\n");
  printf("%d %d",*p1,*p2);
  getch();
}
