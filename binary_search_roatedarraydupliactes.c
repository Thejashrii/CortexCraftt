#include<stdio.h>
#include<stdlib.h>
#define PRINTF printf("\n")
#include<stdbool.h>

bool search(int *a,int n,int x)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		int mid=low+high/2;
		if(a[mid]==x)return true;

		if(a[mid]==a[low] && a[mid]==a[high]){
			low=low+1;
			high=high-1;
			continue;
		}//if target at the end positions found or if array contating one element or the arra is empty
		if(a[low] <= a[mid])//search in left side part
		{
			if(a[low] <= x && x <= a[mid])
			high = mid-1;
			else low=mid+1;
		}
		else//search in right side part
		{
			if(a[mid] <= x && x <= a[high])
				low=mid+1;
			else high=mid-1;
		}
	}
	return false;
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
	printf("enter the target element to search in the array");
	PRINTF;
	scanf("%d",&target);
	
	if(search(arr,n,target)) puts("True");
	else puts("False");
	free(arr);
	return EXIT_SUCCESS;
}
