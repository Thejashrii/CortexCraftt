#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a,b;
	puts("enter the two numbers");
	scanf("%d%d",&a,&b);
	int result = (a < b)?a:b;
	while(result > 0)
	{
		if(a % result == 0 && b % result == 0)
			break;
		result--;
	}
	printf("GCD of two numbers is %d\n",result);
}

