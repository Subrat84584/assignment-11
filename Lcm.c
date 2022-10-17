//Lcm
#include<stdio.h>
int LCM(int a,int b);
int main()
{
	int a,b,L;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	L=LCM(a,b);
	printf("Lcm is:%d",L);
	return 0;
}
int LCM(int a,int b)
{
	int i;
	for(i=1;i<=a*b;i++)
	{
		if(i%a==0&&i%b==0)
		return i;
	}
	
}
