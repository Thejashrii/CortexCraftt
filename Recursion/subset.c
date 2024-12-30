#include<stdio.h>
#include<stdlib.h>


void subset(int *p,int n,int i,int j,int *r)
{
	if(i >= n)
	{
		printf("[");
		for(int k = 0;k < j;k++)
		{
			printf("%d ",r[k]);
		}
		printf("]\n");
		return ;
	}
	
	r[j] = p[i];
	subset(p,n,i+1,j+1,r);
	subset(p,n,i+1,j,r);
}


int main()
{
	int *arr = NULL,n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	arr = calloc(n,sizeof(int));
	puts("enter the array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int *result = NULL;
	result = calloc(n,sizeof(int));
	printf("All subsets of array\n");
	subset(arr,n,0,0,result);
}