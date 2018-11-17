#include<stdio.h>
#include<stdlib.h>
struct st
{
	int a;
	char b;
	int c;
};
int main()
{ 
	struct st *ptr=malloc(sizeof *ptr);
    printf("Enter the values:\n");
    scanf("%d %c %d",&ptr->a,&ptr->b,&ptr->c); 
    printf("%d\t %c\t %d\t",ptr->a,ptr->b,ptr->c);
}