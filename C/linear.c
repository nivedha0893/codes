#include<stdio.h>
int linear(int [],int,int);
int main()
{
	int arr[5]={10,12,23,34,15};
	int key;
	printf("enter the key value");
	scanf("%d",&key);
	int pos=linear(arr,key,5);
	if(pos)
		printf("Element found at %d position",pos);
	else
		printf("Element not found");
}
int linear(int arr[],int key,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(key==arr[i])
			return i+1;
	}
	return 0;
}