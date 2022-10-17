//prime
#include<stdio.h>
int prime(int);
int main()
{
	int num;
	printf("enter your number");
	scanf("%d",&num);
	int p=prime(num);
	if(p==1)
	printf("yes this is prime number");
	else
	printf("no this is not prime number");
	return 0;
}
int prime(int num)
{
	int i,count=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==2)
	return 1;
	else
	return 0;
}
