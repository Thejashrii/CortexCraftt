#include<stdio.h>
#include<stdlib.h>
int main()
{
	int res=0,n;
	printf("enter n value \n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(((i+j)%2)!=0)
			printf("%d ",0);
			else
				printf("%d ",1);
		}
		printf("\n");
	}
}
