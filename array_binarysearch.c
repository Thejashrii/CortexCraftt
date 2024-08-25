#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int binarysearch(int *,int,int);
int main()
{
	int *arr,n,b,index;
	puts("enter the no of elements:");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	printf("enter the elements in ascending order\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elements are\n");
	for(int i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
	printf("enter the element to be searched\n");
	scanf("%d",&b);
	index=binarysearch(arr,n,b);
	if(index==-1)
		printf("%d is not found in the array\n",b);
	else
		printf("%d is found in the array\n",b);
}

int binarysearch(int *a,int l,int bin)
{
	int low,high,mid;
	low=0,high=l-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(bin<a[mid])
			high=mid-1;
		else if(bin>a[mid])
			low=mid+1;
		else
			return mid;
	}
	return -1;
}

