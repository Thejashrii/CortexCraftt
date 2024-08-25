#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int average(int *,int);
int main()
{
	int *arr,n,avg;
	puts("enter the no of elements:");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	printf("enter the elements of array\n");
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
	avg=(average(arr,n))/n;
	printf("average of all elements in the array is %d\n",avg);
}
int average(int *a,int l)
{int i=0,sum=0;
	while(i<l)
	{
		sum+=a[i];
		i++;
	}
	return sum;
}

