#include<stdio.h>
#include<stdlib.h>
int k=0;
void subsum(int *a,int i,int j,int n,int **result,int sum)
{
	if(i>=n)
	{
		*result=realloc(*result,(k+1)*sizeof(int));
		result[0][k]=sum;
		k++;
		return;
	}
	sum+=a[i];
	subsum(a,i+1,j+1,n,result,sum);
	sum-=a[i];
	subsum(a,i+1,j,n,result,sum);
}
void sort(int *p,int l)
{
	int temp=0;
	for(int i=0;i<l-1;i++)
	{
		for(int j=0;j<l-i-1;j++)
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
int main()
{
	int *arr=NULL,*res=NULL,n;
	printf("enter the array size\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	res=NULL;
	subsum(arr,0,0,n,&res,0);
	sort(res,k);
	printf("[");
	for(int i=0;i<k;i++)
	{
		printf("%d ",res[i]);
	}
	printf("]\n");
}

