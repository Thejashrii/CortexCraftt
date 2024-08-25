#include<stdio.h>
#include<stdlib.h>
int q=0;
void combsum(int *a,int *a1,int i,int j,int n,int target,int ***res)
{
	if(i>=n){
		if(target==0){
			*res=realloc(*res,(q+1)*sizeof(int *));
			(*res)[q]=malloc(j*sizeof(int));
			for(int k=0;k<j;k++)
			{
				(*res)[q][k]=a1[k];
			}
			q++;
		}
		return;
	}
	if(a[i]<=target){
	a1[j]=a[i];
	combsum(a,a1,i,j+1,n,target-a[i],res);
	}
	combsum(a,a1,i+1,j,n,target,res);
}


int main()
{
	int target,*arr=NULL,*arr1=NULL,**result=NULL,n;
	printf("enter the array size\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("enter the target\n");
	scanf("%d",&target);
	printf("enter the array elemnts\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	arr1=(int *)malloc((n+1)*sizeof(int));
	result=NULL;
	combsum(arr,arr1,0,0,n,target,&result);
	for(int i=0;i<q;i++)
	{
		printf("[");
		for(int j=0;result[i][j]!='\0';j++){
			printf("%d ",result[i][j]);
		}
		printf("]\n");
		free(result[i]);
	}
	free(result);
	free(arr);
	free(arr1);

}

