#include<stdio.h>
int main()
{
	int i,j,k,l,m,n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("+");
		}
		l=i+(i-1);
		for(k=0;k<l;k++)
		{
			printf("*");
		}
		for(m=0;m<n-i;m++)
		{
			printf("+");
		}
		printf("\n");
	}
}