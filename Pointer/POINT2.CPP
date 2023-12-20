#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[10],n,i,*p,pos,s,flag=0;
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  p=ar;
  for(i=0;i<n;i++)
  {
    scanf("%d",p);
    p++;
  }
  printf("ENTER THE SCREACH ELEMENT: ");
  scanf("%d",&s);
  p=ar;
  for(i=0;i<n;i++)
  {
    if(*p==s)
    {
      flag=1;
      pos=i;
      break;
    }
    p++;
  }
  if(flag==1)
  printf("THE ELEMENT IS IN THE ARRAY=%d AND THE POSITION IS=%d.",*p,pos);
  else
  printf("THE ELEMENT IS NOT IN THE ARRAY.");
  getch();
}
