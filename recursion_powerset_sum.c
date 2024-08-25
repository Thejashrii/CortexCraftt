#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void power(int *a,int *p,int i,int j,int n,int sum,int s)
{
	if(i==n){
		if(s==sum){
		printf("[");
		for(int k=0;k<j;k++)
		{
			printf("%d ",p[k]);
		}
		printf("]\n");
		}
		return ;
	}
	p[j]=a[i];
	s+=p[j];
	power(a,p,i+1,j+1,n,sum,s);//include current element and add sum
	s-=p[j];
	power(a,p,i+1,j,n,sum,s);//exclude current element and added sum
}

int main()
{
	int sum,*arr=NULL,*arr1=NULL,n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	arr1=(int *)malloc(n*sizeof(int));
	//srand(getpid());
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
	power(arr,arr1,0,0,n,sum,0);
}
