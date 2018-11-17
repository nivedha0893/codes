#include<stdio.h>
void fibo(int);
int main()
{
	int a;
	printf("Enter the value:\n");
	scanf("%d",&a);
	fibo(a);
}
void fibo(int a)
{
	int i,sum=0,old=0,new=1;
	for(i=1;i<=a;i++){
		printf("%d\n",old);
		sum=old+new;
		old=new;
		new=sum;
	}
}