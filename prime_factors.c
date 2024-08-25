#include<stdio.h>

int main()
{
	int n;
	printf("enter the n\n");
	scanf("%d",&n);
	for(int i=2;n!=1;i++)
	{
		while(!(n%i))
		{
			printf("%d ",i);
			n/=i;
		}
	}
}

