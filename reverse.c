#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,rem=0,rev=0;
	printf("enter the num\n");
	scanf("%d",&num);
	int temp=num;
	while(num>0)
	{
		rem=num%10;
		num/=10;
		rev=(rev*10)+rem;
	}
	printf("%d is reverse of %d\n",rev,temp);
}

