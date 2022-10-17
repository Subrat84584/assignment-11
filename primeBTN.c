//prime number btn two number
#include<stdio.h>
int prime(int,int);
int main()
{
	int a,b;
	printf("enter your numbers");
	scanf("%d %d",&a,&b);
	prime(a,b);
}
int prime(int a,int b)
{
	int i,j;
	a=a+1;
	for(i=a;i<b;i++)
	{
		int count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==2)
		printf("%d ",i);
	}
	return 0;
}

