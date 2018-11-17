#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int i,max=arr[0];
	for(i=1;i<5;i++)
	{
		if(arr[i]>max)//for smaller value if(arr[i]<max)
		{
			max=arr[i];
		}
	}
			printf("%d\n",max);

}