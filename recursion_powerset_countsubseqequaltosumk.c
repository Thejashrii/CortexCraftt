#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<stdbool.h>

int power(int *a,int i,int j,int n,int sum,int s)
{
	if(i==n){
		if(s==sum)
		return 1;
		else return 0;
	}
	s+=a[i];
	int left=power(a,i+1,j+1,n,sum,s);
	s-=a[i];
	int right=power(a,i+1,j,n,sum,s);
	return left+right;
}

int main()
{
	int sum,*arr=NULL,n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("enter the target\n");
	scanf("%d",&sum);
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("elements are\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("%d\n",power(arr,0,0,n,sum,0));
}
