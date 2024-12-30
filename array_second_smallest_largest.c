#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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
	int max_first = INT_MIN,max_second = INT_MIN;
	int min_first = INT_MAX,min_second = INT_MAX;

	for(int i = 0;i < n;i++)
	{
		if(max_first < arr[i])
		{
			max_second = max_first;
			max_first = arr[i];
		}
		else if(max_second < arr[i] && arr[i] != max_first)
		{
			max_second = arr[i];
		}

		if(min_first  > arr[i])
		{
			min_second = min_first;
			min_first = arr[i];
		}
		else if(min_second > arr[i] && arr[i] != min_first)
		{
			min_second = arr[i];
		}
	}
	printf("%d and %d is largest and second largest elements of the array\n",max_first,max_second);
	printf("%d and %d is smallest and second smallest elements of the array\n",min_first,min_second);
	free(arr);
}

