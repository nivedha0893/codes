#include<stdio.h>
int main()
{
	int a=1,b=1,c=1,res;
	res=a==b>c;
	printf("%d\n",res);
	a=1,b=5,c=2;
	res=a==b>c;
	printf("%d\n",res);
	a=5,b=10,c=0;
	a>b && (c=a);
	printf("%d%d%d\n",a,b,c);
}