//10.
#include<stdio.h>
int series(int);
int fact(int);
int main()
{
	//int n;
	//printf("enter the value of n");
	//scanf("%d",&n);
	series(5);
	return 0;
}
int series(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
	   sum=sum+(fact(i)/i);	
	}
	printf("sum of series is:%d",sum);
}
int fact(int a)
{
	int i,f=1;
	for(i=1;i<=a;i++)
	{
		f=f*i;
	}
	return f;
}

