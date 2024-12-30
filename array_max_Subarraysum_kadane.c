/**maximum subarray sum kadane algoritm **/


#include<stdio.h>
#include<stdlib.h>


//function to find the maximum sum  sub
int maxsumSubarray(int *a,int n)
{
	long long sum = 0;
	long long maxsum = 0;
	
	int i = 0;

	//Traverse the array
	while(i < n)
	{
		sum += a[i];

		if(sum < 0) sum = 0;

		if(sum > maxsum)//update maxsum
		{
			maxsum = sum;
		}

		i++;
	}

	return maxsum;
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
		
	printf("The maximum sum subarray is:%d\n",maxsumSubarray(arr,n));
	free(arr);
	arr = NULL;
	exit(EXIT_SUCCESS);
}


