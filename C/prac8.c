#include<stdio.h>
int main()
{
	int i=23,j=0;
	if(i>=25)
		if(i%2==0)
			j=111;
		else
			j=222;
	printf("%d\n",j);
	return 0;
	//int k=5;
	//if(++k<5 && k++/5 || ++k<8);
	//printf("%d\n",k);
}