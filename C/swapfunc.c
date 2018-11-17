#include<stdio.h>
int swap(int,int);
int main()
{
	int a,b;
	printf("Enter the values:\n");
	scanf("%d %d",&a,&b);
	printf("%d",swap(a,b));
}
int swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;

}