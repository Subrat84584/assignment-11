//9
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	square(n);
	return 0;
}
int square(int n)
{
	int i;
	i=n*n;
	printf("square is :%d",i);
	return 0;
}
