#include<stdio.h>
#include "f2.c"
int sum(int,int);
int main()
{
	int a,b;
	printf("Enter the value:\n");
	scanf("%d %d",&a,&b);
	int res=sum(a,b);
	printf("%d\n",res);
}
