#include<stdio.h>
int main()
{
	int p,n,r;
    printf("Enter the value\n");
    scanf("%d %d %d",&p,&n,&r);
    float si=(float)p*n*r/100; 
	printf("%f\n",si);
}