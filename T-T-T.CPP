#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void players();
void toss();
void display();
void match();
void player1(int);
void player2(int);
char ar[10]={'A','B','C','D','E','F','G','H','I'};
int n=9;
int main()
{
	int res=0;
	printf("LET'S PLAY TIK-TAC-TOE......\n");
	players();
	display();
	match();
	return 0;
}
void players()
{
	char player1[10];
	char player2[10];
	printf("WHO WILL CHOOSE 'x' :: \n");
	gets(player1);
	printf("WHO WILL CHOOSW '0' :: \n");
	gets(player2);
	printf("SO, THE PLAYER-1 IS %s & THE PLAYER-2 IS %s\n",player1,player2);
}
void display()
{
	int i,j;
	for(i=1;i<=11;i++)
	{
		for(j=1;j<=11;j++)
		{
			if(i==4 || i==8 || j==4 || j==8)
			printf(".");
			else
			{
				if(i==2 && j==2)
				printf("%c",ar[0]);
				if(i==2 && j==6)
				printf("%c",ar[1]);
				if(i==2 && j==10)
				printf("%c",ar[2]);
				if(i==6 && j==2)
				printf("%c",ar[3]);
				if(i==6 && j==6)
				printf("%c",ar[4]);
				if(i==6 && j==10)
				printf("%c",ar[5]);
				if(i==10 && j==2)
				printf("%c",ar[6]);
				if(i==10 && j==6)
				printf("%c",ar[7]);
				if(i==10 && j==10)
				printf("%c",ar[8]);
				else
				printf(" ");
			}
		}
		printf("\n");
	}
}
void match()
{
	
	
}
/*void player1(int n)
{

	char temp1;
	int j;
	if(n==0)
	{
		printf("the game is over");
	}
	else{
		n--;
	printf("\nPLAYER-1 PLEASE ENTER YOUR POSITION: \n");
	scanf("%c",&temp1);
	for(j=0;j<9;j++)
	{
		if(ar[j]==temp1)
		{
			ar[j]='x';
		}
	}
	}
	player2(n);
}
void player2(int n)
{
	char temp2;
	int j;
	if(n==0)
	{
		printf("game is over.");
	}
	else{
		n--;
	printf("\nPLAYER-2 PLEASE ENTER YOUR POSITION: \n");
	scanf("%c",&temp2);
	for(j=0;j<9;j++)
	{
		if(ar[j]==temp2)
		{
			ar[j]='0';
		}
	}
	}
	player1(n);
}*/














