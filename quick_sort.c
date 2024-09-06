#include<stdio.h>
#include<stdlib.h>
#define PRINTF printf("\n");
int quick(int *a,int low,int high)
{
	int pivot=a[low];
	int temp,i=low,j=high;
	while(i<j)
	{
		while(a[i]<=pivot && i<=high)
		{
			i++;
		}
		while(a[j]>pivot && j>=low)
		{
			j--;
		}
		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}

	/** swap bet pivot and j index **/
	a[low]=a[j];
	a[j]=pivot;
	return j;
}
		
void quick_sort(int *a,int low,int high)
{
	if(low<high)
	{
		int partition=quick(a,low,high);
		quick_sort(a,low,partition-1);
		quick_sort(a,partition+1,high);
	}
}

int main()
{
	int n,*arr=NULL;
	printf("enter the size:\n");
	scanf("%d",&n);
	arr=calloc(n,sizeof(int));
	if(arr==NULL){
		perror("Memory allaocation error\n");
		exit(0);
	}
	printf("enter the array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elements before sorting:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	PRINTF;
	quick_sort(arr,0,n-1);
	printf("array elements after sorting\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	PRINTF;
}
