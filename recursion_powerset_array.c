#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void power(int *a,int *p,int i,int j,int n)
{
	if(i>=n){
		printf("[");
		for(int k=0;k<j;k++)
		{
			printf("%d ",p[k]);
		}
		printf("]\n");
		return ;
	}
	p[j]=a[i];
	power(a,p,i+1,j+1,n);//include current element

	power(a,p,i+1,j,n);//exclude current element
}

int main()
{
	int *arr=NULL,*arr1=NULL,n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	arr1=(int *)malloc(n*sizeof(int));
	srand(getpid());
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		arr[i]=rand()%100;
	}
	printf("elements are\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	power(arr,arr1,0,0,n);
}
