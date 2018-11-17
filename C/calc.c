#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values:\n");
	scanf("%d %d",&a,&b);
	char opera;
	printf("Enter the operator:\n");
	scanf("%c",&opera);
	switch(opera)
	{
		case '+': printf("add:%d\n",a+b);
		break;
		case '-': printf("sub:%d\n",a-b);
		break;
		case '*': printf("mul:%d\n",a*b);
		break;
		case '/': printf("div:%d\n",a/b);
		break;
		default: printf("not an operator");

	}
}
