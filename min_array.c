#include<stdio.h>
#include<stdlib.h>
int min_array(int *,int);
int main()
{
	int *arr,n,temp=0,index;
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
		printf("%3d",arr[i]);
	}
	printf("\n");
	index=min_array(arr,n);
	if(arr[index]!=arr[0])
	{
		temp=arr[0];
		arr[0]=arr[index];
		arr[index]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");
}
int min_array(int *a,int l)
{int i=1,index=0,min=a[0];
	while(i<l)
	{
		if(min>a[i])
		{
			min=a[i];
			index=i;
		}
		i++;
	}
	printf("minimum value is %d and index is %d\n",min,index+1);
	return i;
}

