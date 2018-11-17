#include<stdio.h>
int main()
{
	int x=2,y=1,z=0;
	z+=-x++ + ++y;
	printf("%d%d %d\n",x,y,z);
	z=++x || ++y && ++z;
	printf("%d%d%d\n",x,y,z);
	x=2;y=2;z=2;
	z+=x<y ? x++ : y++;
	printf("%d%d%d",x,y,z);


}