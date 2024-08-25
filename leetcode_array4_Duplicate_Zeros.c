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
    } while (0)


void right_shift(int *a,size_t n,size_t k)
{
	//shift element to the right starting from the last index
	for(size_t j=n-1;j>k;j--){
		a[j]=a[j-1];
	}
	a[k+1]=0;//insert 0 at the kth position
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

	//task to find zero and allocate zero
	for(size_t i=0;i<n;i++)
	{
		if(arr[i]==0 && i<n-1){
		       	right_shift(arr,n,i);//shift and insert 0 at the next position
			i++;//skip the next position,as its already filled with 0
		}

	}

	for(size_t i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	PRINT_NEWLINE
	

	//free the allocated memory
	free(arr);


	return EXIT_SUCCESS;
}

	



