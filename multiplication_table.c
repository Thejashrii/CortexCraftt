#include<stdio.h>
int main()
{
	int num,width=2;
	printf("enter the num:\n");
	scanf("%d",&num);
	printf("multiplication table for %d\n",num);
	for(int i=1;i<=10;i++)
	{
		printf("%d * %*d = %*d\n",num,width,i,width,num*i);
	}
}

