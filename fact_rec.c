#include<stdio.h>
#include<stdlib.h>
long unsigned int fact(int n)
{
	if(n==0 || n==1)
		return 1;
	return n*fact(n-1);
}
int main()
{
	int num;
	printf("enter the num:\n");
	scanf("%d",&num);
	printf("%lu is factorial of %d\n",fact(num),num);
}
