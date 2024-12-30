#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<unistd.h>
#define PRINTF printf("\n");

int search_min(int *a,int n)
{
	int low=0,high=n-1;
	int min=INT_MAX;
	while(low<=high)
	{
		int mid=(low+high)/2;

		if(a[low] <= a[high])
		{
			if(a[low]<min)
			{
				min=a[low];
			}
			break;
		}

		//if left part is sorted
		if(a[low]<=a[mid])
		{
			if(min>a[low]) 
				min=a[low];

			low=mid+1;
		}
		else
		{
			if(min>a[mid])
				min=a[mid];
			high=mid-1;
		}
	}
	return min;
}

void mergesort(int *p,int low,int mid,int high)
{
	int merge[high-low+1],k=0,i=low,j=mid+1;
	while(i<=mid && j<=high)
	{
		if(p[i]<=p[j])
			merge[k++]=p[i++];
		else merge[k++]=p[j++];
	}
	while(i<=mid)
		merge[k++]=p[i++];
	while(j<=high)
		merge[k++]=p[j++];
	for(int i=low;i<=high;i++)
		p[i]=merge[i-low];
}


void sort(int *p,int low,int high)
{
	if(low>=high) return ;

	int mid=(low+high)/2;
	sort(p,low,mid);
	sort(p,mid+1,high);
	mergesort(p,low,mid,high);
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

	srand(getpid());
	for(int i=0;i<n;i++)
	{
		arr[i]=rand()%30;
	}
	puts("array elements are");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	sort(arr,0,n-1);
	PRINTF;
	printf("%d is the min element in the rotated array\n",search_min(arr,n));
	

	free(arr);
	return EXIT_SUCCESS;
}


