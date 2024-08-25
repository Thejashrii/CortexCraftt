#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;long unsigned int fact=1;
	printf("enter the num:\n");
	scanf("%d",&num);
	int temp=num;
	if(num==0 || num==1)
		printf("%lu is factorial of %d\n",fact,num);
	else
	{
	while(num>0)
	{
		fact=fact*num;
		num--;
	}
	printf("%lu is factorial of %d\n",fact,temp);
	}
}
