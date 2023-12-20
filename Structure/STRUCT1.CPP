#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct student
{
   int roll;
   float marks;
   char name[20];
}std;
void main()
{
  int i,n,r,m;
  std sp[3];
  clrscr();
  printf("ENTER THE RANGE: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("ENTER THE ROLL NUMBER: ");
    scanf("%d",&r);
    printf("ENTER THE TOTAL MARKS: ");
    scanf("%f",&m);
    printf("ENTER THE NAME: ");
    scanf("%s",&sp[i].name);
    sp[i].roll=r;
    sp[i].marks=m;
  }
  printf("STUDENTS INFORMATIONS ARE: \n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",sp[i].roll);
    printf("%f\n",sp[i].marks);
    puts(sp[i].name);
  }
  getch();
}

