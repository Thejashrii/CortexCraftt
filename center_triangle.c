#include<stdio.h>
int main()
{
	int num;
	printf("enter the num:\n");
	scanf("%d",&num);
	for(int i=0;i<num/2;i++)
	{
		for(int j=0;j<num;j++)
		{
			if((j>=((num/2)-1-i)) && (j<((num/2)+i)))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

