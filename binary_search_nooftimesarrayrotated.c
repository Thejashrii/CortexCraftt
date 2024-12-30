#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define PRINTF printf("\n");

int findrotation(int *a,int n)
{
	int low=0,high=n-1;
	int min=INT_MAX;
	int minindex=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;

		if(a[low] <= a[high])
		{
			if(a[low]<min)
			{
				minindex=low;
				min=a[low];
			}
			break;
		}

		//if left part is sorted
		if(a[low]<=a[mid])
		{
			if(min>a[low]) {
				minindex=low;
				min=a[low];
			}

			low=mid+1;
		}
		else
		{
			if(min>a[mid]){
				minindex=mid;
				min=a[mid];
			}
			high=mid-1;
		}
	}
	return minindex;
}


int main()
{
	int *arr=NULL;
	size_t n;
	puts("enter the size of array");
	if(scanf("%zu",&n)!=1)
	{
		fprintf(stderr,"Invalid input\n");
		return EXIT_FAILURE;
	}
	arr=calloc(n,sizeof(int));
	if(arr==NULL)
	{
		perror("Memory allocation failed");
		return EXIT_FAILURE;
	}

	puts("enter the array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	puts("array elements are");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	PRINTF;
	printf("%d times the array is rotated \n",findrotation(arr,n));
	

	free(arr);
	return EXIT_SUCCESS;
}


