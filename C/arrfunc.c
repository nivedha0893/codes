#include<stdio.h>
void array(int [],int);
int main()
{
	int arr[]={1,2,3,4,5};
	array(arr,5);
}
void array(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);	
}