#include<stdio.h>
#include<stdlib.h>
#define PRINTF printf("\n")


int search(int *a,int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=low+high/2;
		if(a[mid]==x)return mid;
		if(a[low] <= a[mid])
		{
			if(a[low] <= x && x <= a[mid])
			high = mid-1;
			else low=mid+1;
		}
		else
		{
			if(a[mid] <= x && x <= a[high])
				low=mid+1;
			else high=mid-1;
		}
	}
	return -1;
}

		
int main()
{
	int *arr=NULL;
	size_t n;
	puts("enter the array size");
	scanf("%zu",&n);
	arr=calloc(n,sizeof(int));
	if(arr==NULL){
		perror("arr");
		exit(EXIT_FAILURE);
	}
	puts("enter the array elements");
	for(size_t i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int target;
	printf("enter the target element to search in the array\n");
	scanf("%d",&target);
	
	printf("%d",search(arr,n,target));

	PRINTF;
	free(arr);
	return EXIT_SUCCESS;
}
