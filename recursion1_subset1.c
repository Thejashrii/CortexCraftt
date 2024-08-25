#include<stdio.h>
#include<stdlib.h>
int q=0;
void subset(int *p,int n,int i,int sum,int **res)
{
	if(i==n){
		*res=realloc(*res,(q+1)*sizeof(int));
		(*res)[q++]=sum;
		return;
	}
	sum+=p[i];
	subset(p,n,i+1,sum,res);
	sum-=p[i];
	subset(p,n,i+1,sum,res);
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
	subset(arr,n,0,0,&res);
	for(int i=q-1;i>=0;i--)
	{
		printf("%d ",res[i]);
	}
	printf("\n");
}
