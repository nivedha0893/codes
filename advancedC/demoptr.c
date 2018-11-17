#include<stdio.h>
#include <stdlib.h>
int main()
{
	int z[10],i;
	printf("%d\n",&z[0]);
	int *ip=z;
	printf("%d\n",&ip[0]);
	printf("%d\n",ip[0]);
	for(i=0;i<10;i++)
	{
       printf("address of z:%d\n",&z[i]);
       printf("address of z using ip:%d\n",&ip[i]);
       ip[i]=(i+1)*100;
       printf("value of z is:%d\n",z[i]);
     }

}