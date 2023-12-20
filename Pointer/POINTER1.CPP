#include<stdio.h>
#include<conio.h>
void main()
{
  int *p,*k,a=15,b=70;
  clrscr();
  p=&a;
  k=&b;
  printf("%d\n",*p);
  printf("%d\n",*k);
  printf("%u\n",p);
  printf("%u\n",k);
  printf("%d\n",*p+*k);
  printf("%d\n",++a);
  printf("%d\n",*p);
  printf("%u\n",p);
  printf("%d\n",(*p)++);
  printf("%d\n",a);
  printf("%d\n",++(*k));
  printf("%d\n",b);
  printf("%u\n",k);
  printf("%d\n",(*k)*2);
  printf("%d\n",*(++p));
  printf("%d\n",++(*p));
  getch();
}