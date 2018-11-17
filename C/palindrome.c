#include<stdio.h>
int main()
{
int num;
printf("enter the num value:");
scanf("%d",&num);
int rem=0,rev=0,temp=num;
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(temp==rev)
{
printf("Palindrome");
}
else{
printf("Not palindrome");
}
}
