#include<stdio.h>
int main()
{


int a=0x43;
char b,c;
b=a&0x0f;
c=a&0xf0;
b=b<<4;
c=c>>4;
a=b|c;
printf("%x\n",a);
}






