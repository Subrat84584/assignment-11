//pascal triangle
int factorial(int);
int combination(int,int);
int pascal(int);
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n (stands for row) for pascal triangle  ");
	scanf("%d",&n);
	pascal(n);
	
}
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int combination(int n,int r)
{
	return factorial(n)/(factorial(r)*factorial(n-r));
}
int pascal(int n)
{
	int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",combination(i,j));
		}
		printf("\n");
	}
	return 0;
}

