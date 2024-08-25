#include<stdio.h>
int main()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i<=j || i>=j)
			       printf("*");
			if(i==j)
				printf("*");	
		}
		printf("\n");
	}
}

