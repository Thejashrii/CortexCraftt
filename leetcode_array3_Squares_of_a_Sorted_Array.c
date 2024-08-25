#include<stdio.h>
#include<stdlib.h>

#define SIZE_ERROR_MESSAGE "Invalid size input\n"
#define MEMORY_ERROR_MESSAGE "Memory allocation failed\n"

#define DYNAMIC_ARRAY_INT(array,n) array=calloc(n,sizeof(int));\
					  if(array==NULL){\
                perror(MEMORY_ERROR_MESSAGE);\
                return EXIT_FAILURE;\
        }
#define PRINT_NEWLINE printf("\n");

void sort(int *p,size_t n)
{
	int temp=0;
	for(size_t i=0;i<n-1;i++)
	{
		for(size_t j=0;j<n-i-1;j++)
		{
			if(p[j]>p[j+1]){
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}

int main()
{
	int *arr=NULL;
	size_t n;
	puts("enter the array size");
	if(scanf("%zu",&n)!=1){
		fprintf(stderr,SIZE_ERROR_MESSAGE);
		return EXIT_FAILURE;
	}

	DYNAMIC_ARRAY_INT(arr,n);
	puts("enter the array elements");
	for(size_t i=0;i<n;i++)
	{
		if(scanf("%d",&arr[i])!=1){
			fprintf(stderr,SIZE_ERROR_MESSAGE);
			free(arr);
			return EXIT_FAILURE;
		}
	}

	int *result=NULL;
	//allocate memory for the result array
	DYNAMIC_ARRAY_INT(result,n);

	//compute the squares of the elements
	for(size_t i=0;i<n;i++){
		result[i]=arr[i]*arr[i];
	}


	//sort the result array
	sort(result,n);

	//print the sorted array
	for(size_t i=0;i<n;i++)
	{
		printf("%d ",result[i]);
	}
	PRINT_NEWLINE

	//Free allocated memory
	free(arr);
	free(result);

	return EXIT_SUCCESS;
}


