#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter the num:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j>1 && j<n && i>1 && i<n)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}