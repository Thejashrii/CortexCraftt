#include<stdio.h>
#include<stdlib.h>

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
	int max_value = 0;
	printf("enter the array elements\n");
	for(size_t i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
		if(max_value < arr[i]) max_value = arr[i];
	}
	printf("%d is the largest element in the array\n",max_value);
	free(arr);
}


