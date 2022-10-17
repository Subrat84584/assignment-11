//4.next prime
#include<stdio.h>
int nextprime(int);
int main()
{
	int n;
	printf("enter your number");
	scanf("%d",&n);
	int p=nextprime(n);
	printf("nextprime number is:%d",p);
	return 0;
}
int nextprime(int n)
{
	int i,j,count=0;
	j=n;
	j+=1;
	for(i=2;i<=j-1;i++)
	{
		if(j%i==0)
		{
		j++;
		}
	}
    return j;	
}
