#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int peak_element(int *a,int n)
{
	if(n==1) return 0;
	if(a[0] > a[1]) return 0;
	if(a[n-1] > a[n-2]) return n-1;

	int low=1,high=n-2;
	while(low<=high)
	{
		int mid=(low+high)/2;

		
		if(a[mid] > a[mid-1]  && a[mid] > a[mid+1])
			return mid;

		if(a[mid] > a[mid-1])
			low= mid + 1;
		else high = mid - 1;
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

	printf("%d is the peak element in the array\n",peak_element(arr,n));

	free(arr);
	return EXIT_SUCCESS;
}
