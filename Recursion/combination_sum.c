#include<stdio.h>
#include<stdlib.h>

void subset(int *p,int n,int target,int i,int j,int *ds,int **result)
{
	if(i == n)
	{
		if(target == 0){
		printf("[");
		for(int k = 0;k < j;k++)
		{
			printf("%d ",r[k]);
		}
		printf("]\n");
		}
		return ;
	}
	
	r[j] = p[i];
	sum += p[i];
	subset(p,n,i+1,j+1,r,sum,k);
	sum -= p[i];
	subset(p,n,i+1,j,r,sum,k);
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
	int target;
	printf("enter the target value to be\n");
	scanf("%d",&target);
	int *add = NULL;
	add = calloc(n,sizeof(int));
	int **result = NULL;
	
	subset(arr,n,target,0,0,add,result);
}
