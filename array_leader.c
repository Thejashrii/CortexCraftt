#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


void leaders_array(int *a,int n,int **res,int *leader_count)
{
	int leader = a[n-1]; 
	
	*res = malloc(sizeof(int));
	if(*res == NULL)
	{
		perror("memory allocation failed");
		exit(EXIT_FAILURE);
	}
	(*res)[0] = leader;
	*leader_count = 1;

	for(int i = n - 2;i >= 0;i--)
    	{
		if(a[i] > leader)
		{
			leader = a[i];
			*res = realloc(*res,(*leader_count + 1)*sizeof(int));
			if(*res == NULL)
			{
				perror("Memory allocation failed");
				exit(EXIT_FAILURE);
			}
			(*res)[*leader_count] = leader;
			(*leader_count)++;
		}
	}
}

int main()
{
	int n,*arr = NULL,*res = NULL,leader_count = 0;
	puts("enter the array size");
	scanf("%d",&n);

	arr = calloc(n,sizeof(int));
	
	if(arr == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	puts("enter the elements");
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	leaders_array(arr,n,&res,&leader_count);

	puts("Leaders of the array:");
	for(int i = leader_count - 1;i >= 0;i--)//print in reverse order
	{
		printf("%d ",res[i]);
	}
	printf("\n");
	free(arr);
	free(res);
	
	exit(EXIT_SUCCESS);
}

