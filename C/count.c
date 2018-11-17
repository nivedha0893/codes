#include<stdio.h>
int main()
{
	unsigned long long int num;
	printf("enter the number:\n");
	scanf("%llu",&num);
	unsigned long long int count=0;
	while(num!=0)
	{
		count++;
		num=num/10;
	}
	printf("%llu",count);
}