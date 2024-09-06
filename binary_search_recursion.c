#include<stdio.h>
#include<stdlib.h>
#define PRINTF printf("\n")
int  binary_search(int *p,int low,int high,int target){
	if(low>high) return -1;
		int mid=(low+high)/2;
		if(p[mid]==target) return mid;
		else if(p[mid]>target) return binary_search(p,low,mid-1,target);
		else return binary_search(p,mid+1,high,target);
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
	int p=binary_search(arr,0,n-1,target);
	if(p==-1)printf("%d not found in the array\n",target);
	else printf("%d is found at %d\n",target,p);
	free(arr);
	return EXIT_SUCCESS;
}
