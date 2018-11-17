#include<stdio.h>
int main()
{
	int a=4;
	int sum=10;
	sum+=a;
	printf("First sum value :%d\n",sum);
	sum-=a;
	printf("second sum value :%d\n",sum);
	a+=sum;
	printf("a value :%d\n",a);
	a*=sum;
	printf("next a value :%d\n",a);
	sum/=a;
	printf("next sum value :%d\n",sum);
}