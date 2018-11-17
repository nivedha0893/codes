#include<stdio.h>
void fact(int);
int main()
{
	int n=5;
	//printf("Enter a value:\n");
	//scanf("%d",&n);
	fact(n);
}
void fact(int a)
{
	int f=1,i;
	for(i=a;i>=1;i--)
	{
		f=f*i;
	}
	printf("Fact is %d\n",f);
}