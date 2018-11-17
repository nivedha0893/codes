#include<stdio.h>
int main()
{
	int n=3,i,j,k,l;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		l=i+(i-1);
		for(k=0;k<l;k++)
		{
			printf("*");
		}
		printf("\n");
	}

}