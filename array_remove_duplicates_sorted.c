#include<stdio.h>
#include<stdlib.h>

void sort(int *a,int n)
{
	for(int i = 0;i < n - 1;i++)
	{
		for(int j = 0;j < n - i - 1;j++)
		{
			if(a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int removeduplicates(int *a,int n)
{
	int i = 0;
	for(int j = 1;j < n;j++)
	{
		if(a[i] != a[j])
		{
			i++;
			a[i] = a[j];
		}
	}
	return i + 1;
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
	sort(arr,n);
	for(int i = 0;i < n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	int k = removeduplicates(arr,n);
	printf("array after removing the duplicates\n");
	for(int i = 0;i < k;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	free(arr);
}


