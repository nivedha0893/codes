#include<stdio.h>
int main()
{
	int a=25;
	int x=a++;
	int y= --a;
	++a;
	int z= a;
	int b=a--;
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",a);
	printf("%d\n",z);
	printf("%d\n",b);

}