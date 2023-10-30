#include<stdio.h>
#include<conio.h>
void add()
{
	int a,b,res;
	printf("enter 2 numbers ");
	scanf("%d%d",&a,&b);
	res=a+b;
	printf("sum=%d",res);
}
void main()
{
	add();
	getch();
}
