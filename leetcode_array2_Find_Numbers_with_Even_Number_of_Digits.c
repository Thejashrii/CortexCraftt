#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MEMORY_ERROR_MESSAGE "Memory allocation failed\n"
#define SIZE_ERROR_MESSAGE "Invalid size input\n"


//function to check if the number of digits in x is even
bool even_digits(int x)
{
	int cnt=0;
	while(x)
	{
		cnt++;
		x/=10;
	}
	return (cnt%2 ==0);
}



int main()
{
	int *arr=NULL;
	size_t n;

	puts("Enter the array size:");
	if(scanf("%zu",&n)!=1){
		fprintf(stderr,SIZE_ERROR_MESSAGE);
		return EXIT_FAILURE;
	}

	arr=calloc(n,sizeof(int));
	if(arr==NULL){
		perror(MEMORY_ERROR_MESSAGE);
		return EXIT_FAILURE;
	}

	puts("Enter the array elements:");
	for(size_t i=0;i<n;i++)
	{
		if(scanf("%d",&arr[i])!=1){
			fprintf(stderr,"Invalid input for array element\n");
			free(arr);
			return EXIT_FAILURE;
		}
	}
	int cnt=0;
	for(size_t i=0;i<n;i++){
		if(even_digits(arr[i])) cnt++;
	}
	printf("%d\n",cnt);

	free(arr); //Free allocated memory
	return EXIT_SUCCESS;
}

