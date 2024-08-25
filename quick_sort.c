#include<stdio.h>
#include<stdlib.h>
int quick(int *a,int low,int high)
{
	int pivot=a[low];
	int temp,i=low,j=high;
	while(i<j)
	{
		while(a[i]<=pivot && i<=high-1)
		{
			i++;
		}
		while(a[j]>a[pivot] && j>=low+1)
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
	temp=a[low];
	a[low]=a[j];
	a[j]=temp;
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
	int n,*arr;
	printf("enter the size:\n");
	scanf("%d",&n);
	arr=calloc(n,sizeof(int));
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
	printf("\n");
	quick_sort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
