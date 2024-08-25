#include<stdio.h>
int main()
{
	int num,power;long unsigned int result=1;
	printf("enter the number and exponent:\n");
	scanf("%d %d",&num,&power);
	for(int i=1;i<=power;i++)
	{
		result=result*num;
	}
	printf("%d to the power of %d is %lu\n",num,power,result);
}

