/*#include<stdio.h>
int main()
{
	int i,n,sum=0,old=0,new=1;
	printf("Enter the n value:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  printf("%d\n",old);
	  sum=old+new;
	  old=new;
	  new=sum;
	}
}*/
#include<stdio.h>
int main()
{
	int i,n,*ptr,sum=0,new=1,old=0;
	printf("Enter the n value:\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(i=1;i<=n;i++)
	{
		printf("%d",old);
		sum=old+new;
		old=new;
		new=sum;

	}
}