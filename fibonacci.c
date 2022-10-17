//7.write a function to print first N terms of fibonacci series.
#include<stdio.h>
int fibonacci(int);
int main()
{
    int n;
	printf("enter your terms value to see the series of fibonnaci series");
	scanf("%d",&n);
	fibonacci(n);	
	return 0;
}  
int fibonacci(int n)
{
	int i,term1=1,term2=1;
	int nextterm=term1+term2;
	printf("%d %d %d ",term1,term2,nextterm);
	for(i=1;i<=n-3;i++)
	{
		term1=term2;
		term2=nextterm;
		nextterm=term1+term2;
		printf("%d ",nextterm);
	}
	return 0;
}
