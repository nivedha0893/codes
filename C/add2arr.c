#include<stdio.h>
int main()
{
	int arr1[5]={2,3,4,5,6};
	int arr2[5]={3,4,5,6,7};
	int i,sum=0,sum1=0,add=0;
	for(i=0;i<5;i++)
	{
		sum=sum+arr1[i];
	}
	printf("%d\n",sum);
	for(i=0;i<5;i++)
	{
		sum1=sum1+arr2[i];
	}
	printf("%d\n",sum1);
	add=sum+sum1;
	printf("%d\n",add);
}