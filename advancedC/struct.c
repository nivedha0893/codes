#include<stdio.h>
struct student
{
	int roll;
	char name[100];
	float fee;
	char contact[15];
	char address[100];
	char dob[20];
};
struct student1
{
	char a;
	int b;
	char c;

};
int main()
{
	struct student st[100];
	int size=sizeof(struct student1);
	printf("Size of:%d\n",size);
}