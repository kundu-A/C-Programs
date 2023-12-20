#include<stdio.h>
#include<conio.h>
struct student
{
  char name[20];
  int roll;
  float marks;
};
void main()
{
  struct student a;
  clrscr();
  printf("ENTER THE NAME OF THE STUDENT: ");
  gets(a.name);
  printf("ENTER THE ROLL OF THE STUDENT: ");
  scanf("%d",&a.roll);
  printf("ENTER THE TOTAL MARKS OF THE STUDENT: ");
  scanf("%f",&a.marks);
  printf("\nINFORMATION OF THE STUDENT: \n");
  puts(a.name);
  printf("%d",a.roll);
  printf("\n%f",a.marks);
  getch();
}
