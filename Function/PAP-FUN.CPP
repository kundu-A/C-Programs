#include<stdio.h>
#include<conio.h>
void prm(int);
void arm(int);
void prft(int);
void main()
{
  int n,ch;
  clrscr();
  printf("ENTER THE NUMBER TO CHECK:- ");
  scanf("%d",&n);
  printf("1.PRIME \t2.PERFECT \t3.ARMSTRONG");
  printf("\nENTER YOUR CHOICE:- ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1: prm(n);
    break;
    case 2: prft(n);
    break;
    case 3: arm(n);
    break;
    default: printf("PLEASE ENTER RIGHT CHOICE");
  }
  getch();
}
void prm(int x)
{
  int i,flag=0;
  for(i=2;i<=x/2;i++)
  {
    if(x%i==0)
    flag=1;
  }
  if(flag==0)
  printf("IT IS A PRIME NUMBER");
  else
  printf("IT IS NOT A PRIME NUMBER");
}
void prft(int y)
{
  int j,sum=0;
  for(j=1;j<y;j++)
  {
    if(y%j==0)
    sum=sum+j;
  }
  if(y==sum)
  printf("IT IS A PERFECT NUMBER");
  else
  printf("IT IS NOT A PERFECT NUMBER");
}
void arm(int z)
{
  int k,c=0,a,i,p,sum=0,d;
  a=z;
  while(z!=0)
  {
    c=c+1;
    z=z/10;
  }
  printf("%d\n",c);
  z=a;
  while(a!=0)
  {
    p=1;
    d=a%10;
    for(i=1;i<=c;i++)
   {
      p=p*d;
   }
    sum=sum+p;
   a=a/10;
  }
  if(z==sum)
  printf("IT IS A ARMSTRONG NUMBER");
  else
  printf("IT IS NOT A ARMSTRONG NUMBER");
}







