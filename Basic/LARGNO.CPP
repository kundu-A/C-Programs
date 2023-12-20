#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("PLEASE ENTER THREE NUMBERS:-");
   scanf("%d%d%d",&a,&b,&c);
   printf("THE VALUE OF A=%d  B=%d  C=%d",a,b,c);
   if(a>b)
	{
	  if(a>c)
	  printf("\nTHE LARGEST VALUE=%d",a);
	  else
	  ("\nTHE LARGEST VALUE=%d",c);
	}
   else
	{
	  if(b>c)
	  printf("\nTHE LARGEST VALUE=%d",b);
	  else
	  printf("\nTHE LARGEST VALUE=%d",c);
	}
   getch();
}
