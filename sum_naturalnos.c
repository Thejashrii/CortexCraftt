#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the last no:\n");
	scanf("%d",&n);
/*	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}taking linear time*/
	sum=(n*(n+1))/2;
	printf("%d\n",sum);
}

