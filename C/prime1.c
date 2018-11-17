#include<stdio.h>
int main()
{
	int n,i,j,count=0;
	printf("enter the n value:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break;
		}
		if(j>=i)
		{
		 count++;
	     printf("The prime numbers are:%d\n",i);
	    }
	}
	printf("Count:%d\n",count);
}