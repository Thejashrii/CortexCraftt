#include<stdio.h>
#include<stdlib.h>
int q=0;
void permutation(int *a,int *a1,int i,int j,int n,int **res)
{
	if(i>=n)
	{
		for(int k=0;k<n;k++)
		{
			res[q][k]=a1[k];
		}
		q++;
		return;
	}
	for(int k=i;k<n;k++)
	{
		a1[j]=a[k];
		permutation(a,a1,k,j+1,n,res);
	}
}

int main()
{
	int *arr=NULL,*arr1=NULL,**res=NULL,n;
	puts("enter the array size");
	scanf("%d",&n);


	arr=(int *)malloc(n*sizeof(int));
	puts("enter the array elements");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	arr1=(int *)malloc(n*sizeof(int));

	if(arr==NULL ||arr1==NULL){
		fprintf(stderr,"Memory allocation failed\n");
		return 0;
	}
	res=(int **)malloc((1<<n)*sizeof(int*));
	for(int i=0;i<(1<<n);i++)
	{
		res[i]=(int *)malloc(n*sizeof(int));
	}


	permutation(arr,arr1,0,0,n,res);
	for(int i=0;i<q;i++)
	{
		printf("[");
		for(int j=0;j<n;j++)
		{
			printf("%d ",res[i][j]);
		}
		printf("]\n");
	}
	for(int i=0;i<(1<<n);i++)free(res[i]);
	free(res);
	free(arr);
	free(arr1);
}

