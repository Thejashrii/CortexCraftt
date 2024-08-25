#include<stdlib.h>
#include<stdio.h>
int main()
{
	int *arr=NULL;
	size_t n;
	puts("enter the array size");
	scanf("%zu",&n);
	arr=calloc(n,sizeof(int));
	if(arr==NULL)
	{
		perror("Memory allocation failed");
		return EXIT_FAILURE;
	}
	puts("enter the array elements only 0's and 1's");
	for(size_t i=0;i<n;i++)
	{
		if(scanf("%d",&arr[i])!=1 || (arr[i]!=0 && arr[i]!=1))
		{
			fprintf(stderr,"Invalid input\n");
			free(arr);
			return EXIT_FAILURE;
		}
		//clearing input buffer
		int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);
	}

	//process the array (finding the maximum consecutive 1's)
	int count=0,max=0;
	for(int i=0;i<n;i++)
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


