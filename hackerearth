#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<limits.h>
int q=0;
void poweradd(int *a,int i,int j,int n,int *t,int *res)
{
	if(i>=n){
		int sum=0;
		for(int k=0;k<j;k++){
			sum+=t[k];
		}
		res[q++]=sum;
		return ;
	}
	t[j]=a[i];
	poweradd(a,i+1,j+1,n,t,res);
	poweradd(a,i+1,j,n,t,res);
}


int max(int *res,int N)
{
	int maxi=INT_MIN,cnt=0;
	for(int i=0;i<N;i++){
		if(maxi<res[i]) maxi=res[i];
	}
	for(int i=0;i<N;i++){
		if(maxi==res[i]) cnt++;
	}
	return cnt;
}

int main()
{
	int *arr=NULL;
	size_t n;
	printf("enter the array size\n");
	if(scanf("%zu",&n)!=1){
		printf("SIZE ERROR\n");
		return EXIT_FAILURE;
	}
	arr=malloc(n*sizeof(int));
	if(arr==NULL)
	{
		perror("MEMORY ERROR\n");
		free(arr);
		return EXIT_FAILURE;
	}
	printf("enter the array elements\n");
	for(size_t i=0;i<n;i++)
	{
		if(scanf("%d",&arr[i])!=1){
			printf("INVALID INPUT ERROR\n");
			return EXIT_FAILURE;
		}
	}
	int N=pow(2,n)-1;
	int *temp=malloc(n*sizeof(int));
	int *res=malloc(N*sizeof(int));
	poweradd(arr,0,0,n,temp,res);
	printf("%d\n",max(res,N));
}


