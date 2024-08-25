#include<stdio.h>
#include<stdlib.h>
int q=0;
void permutation(int *a,int *a1,int left,int right,int j,int ***res,int *freq)
{
	if(left>=right){
		*res=realloc(*res,(q+1)*sizeof(int*));
		(*res)[q]=malloc(right*sizeof(int));
		for(int k=0;k<right;k++)
		{
			(*res)[q][k]=a1[k];
		}
		q++;
		return;
	}
	for(int i=0;i<right;i++)
	{
		if(!freq[i]){
		a1[j]=a[i];
		freq[i]=1;
		permutation(a,a1,left+1,right,j+1,res,freq);
		freq[i]=0;
		}
	}
}

int main()
{
	int *arr=NULL,*freq=NULL,**result=NULL,*arr1=NULL,n;
	printf("enter the arr size\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	arr1=(int *)malloc(n*sizeof(int));
	freq=(int *)malloc(n*sizeof(int));
	permutation(arr,arr1,0,n,0,&result,freq);
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
	free(arr1);
	free(freq);
}
