//5.print first n prime number.
#include<stdio.h>
int prime(int n);
int main()
{
	int n;
	printf("enter the value of n ");
	scanf("%d",&n);
	prime(n);
}
int prime(int n)
{
	int i=3,count,c;
	if(n>=1)
	{
		printf("2 ");
	}
	for(count=2;count<=n;i++)
	{
		for(c=2;c<i;c++)
		{
			if(i%c==0)
			break;
		}
		if(c==i)
		{
			printf("%d ",i);
			count++;
		}
	}
	return 0;
	
}
