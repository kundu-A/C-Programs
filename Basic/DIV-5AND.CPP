#include<stdio.h>
#include<conio.h>
void main()
{
      int n;
      clrscr();
      printf("ENTER THE NUMBER TO CHEAK: ");
      scanf("%d",&n);
      if(n/5 && n/11)
      printf("IT IS DIVISIBLE BY 5 AND 11");
      else
      printf("IT IS NOT DIVISIBLE BY 5 AND 11");
      getch();
}