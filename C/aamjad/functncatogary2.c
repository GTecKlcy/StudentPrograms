#include<stdio.h>
#include<conio.h>
void add(int,int);
void main()
{
	int x,y;
	printf("enter 2 numbers ");
	scanf("%d%d",&x,&y);
	add(x,y);
	getch();
}
void add(int a,int b)
{
	int res;
	res=a+b;
	printf("result=%d",res);
}
