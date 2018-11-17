#include<stdio.h>
int main()
{
	int a=10,b=5,res;
	a>b ? (res=a-b) : (res=a+b);
	printf("%d\n",res);
}