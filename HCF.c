//Hcf
#include<stdio.h>
int HCF(int,int);
int main()
{
	int a,b;
	printf("enter your two number");
	scanf("%d %d",&a,&b);
	int H=HCF(a,b);
	printf("The highest common factor is:%d",H);
	return 0;
}
int HCF(int a,int b)
{
	int i,hf;
	for(i=a>b?a:b;i>1;i--)
	{
		if(a%i==0&&b%i==0)
		return i;        
	}
	
}
