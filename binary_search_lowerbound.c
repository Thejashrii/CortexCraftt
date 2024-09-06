#include<stdio.h>
#include<stdlib.h>
#define PRINTF printf("\n")
int  binary_search(int *p,int low,int high,int target)
{
	 int ans=high+1;
	while(low<=high){
	int mid=(low+high)/2;
	if(p[mid]>=target) {
		ans=mid;
		high=mid-1;
	}
	else low=mid+1;
	}
	return ans;

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
	printf("lower bound is %d\n",binary_search(arr,0,n-1,target));
	free(arr);
	return EXIT_SUCCESS;
}
