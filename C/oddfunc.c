#include<stdio.h>
int odd(int);
int main()
{
	int a;
	printf("a value is:");
	scanf("%d",&a);
	printf("%s\n",	odd(a) ? "odd" : "even");
}
int odd(int a)
{ 
	return a%2;
}