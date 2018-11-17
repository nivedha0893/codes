#include<stdio.h>
void am();
int main()
{
	am();
}
void am()
{
	int n,res=0,rem=0,temp;
    printf("enter a value:\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
    	rem=n%10;
    	res=res+rem*rem*rem;
    	n=n/10;
    }
    if(temp==res)
    {
    	printf("Amstrong");
    }
    else
    	printf("Not Armstrong");
}