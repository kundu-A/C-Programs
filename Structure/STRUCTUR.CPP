#include<stdio.h>
#include<conio.h>
struct std
{
  int roll;
  float marks;
};
void main()
{
  int da;
  std sp;
  clrscr();
  printf("ENTER THE ROLL NUMBER: ");
  scanf("%d",&sp.roll);
  //scanf("%d",&da);
  //sp.roll=da;
  printf("ENTER THE MARKS: ");
  scanf("%f",&sp.marks);
  printf("HERE THE STUDENT DETALIS: \n");
  printf("%d\n",sp.roll);
  printf("%f",sp.marks);
  getch();
}
