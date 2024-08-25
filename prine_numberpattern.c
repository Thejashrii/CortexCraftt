#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		for(int j=1;j<=num;j++)
                {
			if(j<i)
				printf(" ");
			else
				printf("%d",i);
                }
		printf("\n");
	}
}

