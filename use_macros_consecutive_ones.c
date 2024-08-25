#include<stdlib.h>
#include<stdio.h>
#define VALID_INPUT_MIN 0
#define VALID_INPUT_MAX 1
#define ERROR_MESSAGE "Invalid input\n"
#define SIZE_ERROR_MESSAGE "Invalid size input\n"

#define HANDLE_ERROR(msg) \
	do{\
	        fprintf(stderr,msg);\
                        free(arr);\
                        return EXIT_FAILURE;\
          }while(0)

#define VALIDATE_INPUT(input) \
	if(scanf("%d",&input)!=1 || (input != VALID_INPUT_MIN && input !=VALID_INPUT_MAX)){\
		HANDLE_ERROR(ERROR_MESSAGE);\
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


	arr=calloc(n,sizeof(int));
	if(arr==NULL)
	{
		perror("Memory allocation failed");
		return EXIT_FAILURE;
	}
	puts("enter the array elements only 0's and 1's");
	for(size_t i=0;i<n;i++)
	{
		int value;
		VALIDATE_INPUT(value);
		arr[i]=value;
	}

	//process the array (finding the maximum consecutive 1's)
	int count=0,max=0;
	for(size_t i=0;i<n;i++)
	{
		  if(arr[i]==1){
			  count++;
		if(count>max) max=count;
		  }
		  else
			  count=0;
	}
	printf("%d\n",max);
	free(arr);
	return EXIT_SUCCESS;
}


