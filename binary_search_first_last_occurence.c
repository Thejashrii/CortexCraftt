#include<stdio.h>
#include<stdlib.h>
#define PRINTF printf("\n")
int last_occ(int *p,int low,int high,int target)
{
	int last=-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(p[mid]==target) {
			last=mid;
			low=mid+1;
		}
		else if(p[mid]>target)
		{
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return last;
}
int first_occ(int *p,int low,int high,int target)
{
	int first=-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(p[mid]==target)
		{
			first=mid;
			high = mid-1;
		}
		else if(p[mid]>target){
			high=mid-1;
		}
		else{
			low= mid + 1;
		}
	}
	return first;
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
	

	int res[2];
	res[0]=first_occ(arr,0,n-1,target);
	res[1]=last_occ(arr,0,n-1,target);
	for(int i=0;i<2;i++){
		printf("%d ",res[i]);
	}
	PRINTF;
	free(arr);
	return EXIT_SUCCESS;
}
