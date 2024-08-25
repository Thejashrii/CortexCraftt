#include<stdio.h>
#include<stdlib.h>
int q=0;
void sort(int *p,int n)
{
	int temp=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}
void comsum2(int *a,int *a1,int i,int j,int n,int target,int ***res)
{
	
	if(target==0){
		*res=realloc(*res,(q+1)*sizeof(int*));
		(*res)[q]=malloc(j*sizeof(int));
		for(int k=0;k<j;k++)
		{
			(*res)[q][k]=a1[k];
			printf("%d ",a1[k]);
		}
		printf("\n");
		return;
	}
	for(int k=i;k<n;k++)
	{
		if((k>i) && (a[k]==a[k-1]))continue;
		if(a[k] > target)break;
		a1[j]=a[k];
		comsum2(a,a1,k+1,j+1,n,target-a[k],res);
	}
}

int main()
{
	int target,*arr=NULL,**result=NULL,*arr1=NULL,n;
	printf("enter the arr size\n");
	scanf("%d",&n);
	printf("enter the target\n");
	scanf("%d",&target);
	arr=(int *)malloc(n*sizeof(int));
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	result=NULL;
	arr1=(int *)malloc(n*sizeof(int));
	printf("\n");
	comsum2(arr,arr1,0,0,n,target,&result);
	for(int i=0;i<q;i++)
	{
		for(int j=0;result[i][j]!='\0' && j<n;j++)
		{
			printf("%d ",result[i][j]);
		}
		printf("]\n");
		free(result[i]);
	}
	free(result);
	free(arr);
	free(arr1);
}
