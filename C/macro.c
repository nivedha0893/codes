#include<stdio.h>
#define sqr(x) x*x
int main()
{
	int x;
	printf("enter a number:\n");
	scanf("%d",&x);
    printf("%d\n",sqr(x));
}