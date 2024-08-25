#include<stdio.h>
#include<stdlib.h>
int q=0;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void permutation(int *a,int left,int right,int ***res)
{
	if(left==right){
		*res=realloc(*res,(q+1)*sizeof(int*));
		(*res)[q]=malloc(right*sizeof(int));
		for(int k=0;k<right;k++)
		{
			(*res)[q][k]=a[k];
		}
		q++;
		return;
	}
	for(int i=left;i<right;i++)
	{
		swap(&a[left],&a[i]);
		permutation(a,left+1,right,res);
		swap(&a[left],&a[i]);
	}
}

int main()
{
	int *arr=NULL,**result=NULL,n;
	printf("enter the arr size\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	permutation(arr,0,n,&result);
	for(int i=0;i<q;i++)
	{
		printf("[");
		for(int j=0;j<n;j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("]\n");
		free(result[i]);
	}
	free(result);
	free(arr);
}
