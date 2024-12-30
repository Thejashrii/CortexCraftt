#include<stdio.h>
#include<stdlib.h>


int subset(int *p,int n,int i,int j,int sum,int k)
{
	if(i == n)
	{
		if(sum == k) return 1;
		else return 0;
	}
	
	sum += p[i];
	int l = subset(p,n,i+1,j+1,sum,k);
	sum -= p[i];
	int r = subset(p,n,i+1,j,sum,k);
	return l + r;
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
	int k;
	printf("enter the k value to be\n");
	scanf("%d",&k);
	printf("All subsets of array\n");
	printf("no of subsequences with sum == %d is %d\n",k,subset(arr,n,0,0,0,k));
}
