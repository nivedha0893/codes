#include<stdio.h>
#define a 10
#define b 20
int main()
{
	#if a==b
	printf("same");
	#elif a>b
	printf("nive");
	#else 
	printf("RajNive");
	#endif
	return 0;
}