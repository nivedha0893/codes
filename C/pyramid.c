#include<stdio.h>
int main()
{
	int n,i,j,k,l;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=0;j<n-i;j++)
	{
		printf(" ");
	}
	l=i+(i-1);
	for( k=0;k<l;k++)
	{
		printf("*");
	}
	printf("\n");
    }
}