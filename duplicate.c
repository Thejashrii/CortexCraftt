#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main()
{
	int *arr,n,temp=0,index;
	puts("enter the no of elements:");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
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
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			
		}
	}
	for(int i=0;i<n;i++)
	{

		printf("%3d",arr[i]);
	}
	printf("\n");
}

