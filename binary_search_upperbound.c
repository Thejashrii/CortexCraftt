#include<stdio.h>
#include<stdlib.h>
#define SIZE_ERROR_MESSAGE "Invalid size input\n"
#define MEMORY_ERROR_MESSAGE "Memory allocation failed\n"
#define PRINT_NEWLINE printf("\n");
#define DYNAMIC_ARRAY_INT(array, n) \
    do { \
        array = calloc(n, sizeof(int)); \
        if (array == NULL) { \
            perror(MEMORY_ERROR_MESSAGE); \
            return EXIT_FAILURE; \
        } \
    } while (0);

int binary_search_upperbound(int *p,int n,int target)
{
	int low=0,high=n-1,ans=n;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(p[mid]> target){
			ans=mid;
			high = mid-1;
		}
		else low = mid+1;
	}
	return ans;
}

int main()
{
	int *arr=NULL;
	size_t n;
	printf("enter the array size\n");
	if(scanf("%zu",&n)!=1){
		fprintf(stderr,SIZE_ERROR_MESSAGE);
		return EXIT_FAILURE;
	}



	//allocated memory dynamically
	DYNAMIC_ARRAY_INT(arr,n);

	puts("enter the array elements");
	for(size_t i=0;i<n;i++)
	{
		if(scanf("%d",&arr[i])!=1){
			fprintf(stderr,SIZE_ERROR_MESSAGE);
			free(arr);//free memory before returning
			return EXIT_FAILURE;
		}
	}
	int target;
	puts("enter the number to find the upper bound");
	scanf("%d",&target);

	printf("%d is upper bound of %d",binary_search_upperbound(arr,n,target),target);
	PRINT_NEWLINE
	

	//free the allocated memory
	free(arr);


	return EXIT_SUCCESS;
}

	



