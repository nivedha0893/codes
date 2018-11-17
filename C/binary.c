#include<stdio.h>
int binary(int [],int,int);
int main()
{
	int arr[5]={12,23,54,65,54};
	int key=65;
	int pos=binary(arr,key,5);
	if(pos)
		printf("Element found at %d position",pos);
	else
		printf("Element not found");
}
int binary(int arr[],int key,int n)
{
	int low,high,mid;
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
			return mid+1;
		else if(key>arr[mid])
			low=mid+1;
		else
			high=mid-1;
	}
	return 0;
}