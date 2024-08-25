#include<stdio.h>
#include<stdlib.h>
int temp=0;
void reverse(int *p,int left,int right)
{
	if(left>right) return;
	if(p[left]!=p[right]){
		temp=p[left];
		p[left]=p[right];
		p[right]=temp;
	}
	reverse(p,left+1,right-1);
}
	
int main()
{
	int *arr=NULL,n;
	printf("enter the array size\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		perror("arr");
		exit(0);
	}
	printf("enter the array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	reverse(arr,0,n-1);
	printf("after revrsing\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
