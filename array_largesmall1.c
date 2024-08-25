#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,*arr,n,large,small;
	printf("enter the array size:\n");
	scanf("%d",&n);
	arr=calloc(n,sizeof(int));
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elements are\n");
	for(int i=0;i<n;i++)
	{
		printf("%2d ",arr[i]);
	}
	printf("\n");
	large=small=arr[0];
	for(int i=0;i<n;i++)
	{
		if(large<arr[i])
			large=arr[i];
		if(small>arr[i])
			small=arr[i];
	}
	printf("%d=large and %d=small\n",large,small);
	free(arr);
}

