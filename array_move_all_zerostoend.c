#include<stdio.h>
#include<stdlib.h>


void move_zeroes_toend(int *p,int n)
{
	int j = -1;
	for(int i = 0;i < n;i++)
	{
		if(p[i] == 0)
		{
			j = i;
			break;
		}
	}

	if(j == -1) return;

	for(int i = j+1;i < n;i++)
	{
		if(p[i] != 0)
		{
			int temp = p[i];
			p[i] = p[j];
			p[j] = temp;
			j++;
		}
	}
}


int main()
{
	int *arr = NULL;
	size_t n ;
	printf("enter the array size\n");
	scanf("%ld",&n);
	arr = calloc(n,sizeof(int));
	if(arr == NULL)
	{
		printf("Memory not allocated\n");
		free(arr);
		exit(EXIT_FAILURE);
	}
	printf("enter the array elements\n");
	for(size_t i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	move_zeroes_toend(arr,n);
	for(int i = 0;i < n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	free(arr);
}


