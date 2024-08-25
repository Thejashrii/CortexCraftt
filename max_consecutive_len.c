#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,n,k;
	printf("enter the size of array\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elements ar\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("enter the max length of subarray\n");
	scanf("%d",&k);
	int max=0,sum=0,len=k,left=0;
	while(left<=k)
	{
		sum=0;
		while(len>0)
		{
			sum+=arr[left++];
			len--;
		}
		if(max<sum)
			max=sum;
		left=left-k+1;
		len=k;
	}
	printf("%d\n",max);
}

