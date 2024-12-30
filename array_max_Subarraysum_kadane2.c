/**maximum subarray sum kadane algorithm
 * more than one subarray **/


#include<stdio.h>
#include<stdlib.h>


//function to find the maximum sum  sub
long long maxsumSubarray(int *a,int n)
{
	long long sum = 0;
	long long maxsum = 0;
	
	int i = 0;
	
	int start = 0;
	int ansstart = -1,ansend = -1;
	//Traverse the array
	while(i < n)
	{
		if(sum == 0) start = i; //starting index
		sum += a[i];

		if(sum < 0) sum = 0;

		if(sum > maxsum)//update maxsum
		{
			maxsum = sum;

			ansstart = start;
			ansend = i;
		}

		i++;
	}
		//printing the subarray:
		printf("The subarray is :[");

		for(int i = ansstart;i <= ansend;i++){
			printf("%d ",a[i]);
		}
		printf("]\n");

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
		
	printf("The maximum sum subarray is:%lld\n",maxsumSubarray(arr,n));
	free(arr);
	arr = NULL;
	exit(EXIT_SUCCESS);
}


