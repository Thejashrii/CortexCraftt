#include<stdio.h>
#include<stdlib.h>
void merge(int *a,int low,int mid,int high)
{
	int merge[high+1],k=0,i=low,j=mid+1;
	while(i<=mid && j<=high)
	{
		if(a[i]<=a[j])
		{
			merge[k++]=a[i++];
		}
		else
		{
			merge[k++]=a[j++];
		}
	}
	while(i<=mid)
	{
		merge[k++]=a[i++];
	}
	while(j<=high)
	{
		merge[k++]=a[j++];
	}
	for(int i=low;i<=high;i++)
	{
		a[i]=merge[i-low];
	}
}

void merge_sort(int *a,int low,int high)
{
	if(low>=high)
		return;
	int mid=(low+high)/2;
	merge_sort(a,low,mid);//left half;
	merge_sort(a,mid+1,high);//right half;
	merge(a,low,mid,high);//merging sorted halves

}

int main()
{
	int n,*arr;
	printf("enter the array size:\n");
	scanf("%d",&n);
	arr=calloc(n,sizeof(int));
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");

}
