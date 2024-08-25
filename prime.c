#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int check_prime(int n)
{
	for(int i=2;i<n;i++)
	{
		if((n%i)==0)
			return 0;
	}
	return 1;
}
int main()
{
	int num;
	printf("enter the number to check:\n");
	scanf("%d",&num);
	if(num==0 || num==1)
	{
		printf("%d is not prime no\n",num);
		exit(1);
	}
	if(check_prime(num))
		printf("%d is prime no\n",num);
	else
		printf("%d is not prime no\n",num);
}

