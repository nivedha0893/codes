#include<stdio.h>
#define size 5
int main()
{
	int arr[size]={1,2,3,4,5};
	int b[size];
	int i;
	for(i=0;i<5;i++)
		b[i]=arr[i];
	for(i=0;i<5;i++)
		printf("%d\n",b[i]);
}