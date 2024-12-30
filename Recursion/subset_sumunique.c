#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool subset(int *p,int n,int i,int j,int *r,int sum,int k)
{
	if(i == n){
	if(sum == k){
		printf("[");
		for(int k = 0;k < j;k++)
		{
			printf("%d ",r[k]);
		}
		printf("]\n");
		return true;
	}
	else return false;
	}
	
	r[j] = p[i];
	sum += p[i];
	if(subset(p,n,i+1,j+1,r,sum,k) == true){
		return true;
	}
	sum -= p[i];
	if(subset(p,n,i+1,j,r,sum,k) ==  true){
		return true;
	}
	return false;
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
	int *result = NULL;
	result = calloc(n,sizeof(int));
	subset(arr,n,0,0,result,0,k);
	free(arr);
	free(result);
		
}
