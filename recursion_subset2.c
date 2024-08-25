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
void subset2(int *a,int *a1,int i,int j,int n,int ***res)
{
	*res=realloc(*res,(q+1)*sizeof(int *));
	(*res)[q]=malloc(j*sizeof(int));
	for(int k=0;k<j;k++)
	{
		(*res)[q][k]=a1[k];
	}
	q++;
	for(int k=i;k<n;k++)
	{
		if(k>i && a[k]==a[k-1]) continue;
		a1[j]=a[k];
		subset2(a,a1,k+1,j+1,n,res);
		subset2(a,a1,i+1,j,n,res);
	}
}

int main()
{
	int *arr=NULL,*arr1=NULL,**res=NULL,n;
	printf("enter the array size\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	puts("enter all array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	arr1=(int *)malloc(n*sizeof(int));
	sort(arr,n);
	subset2(arr,arr1,0,0,n,&res);
	for(int i=0;i<q;i++)
	{
		printf("[");
		for(int j=0;j<n;j++)
		{
			printf("%d ",res[i][j]);
		}
		printf("]\n");
		free(res[i]);
	}
	free(res);
	free(arr1);
	free(arr);
}

