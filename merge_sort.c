#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void merge(int *,int);
void mergesort(int *,int*,int*,int,int,int);
int main()
{
	int *arr,n,temp=0,index;
	puts("enter the no of elements:");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	srand(getpid());
	for(int i=0;i<n;i++)
	{
		arr[i]=(1+rand())%100;
	}
	printf("array elements are\n");
	for(int i=0;i<n;i++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");
	merge(arr,n);
	for(int i=0;i<n;i++)
	{

		printf("%3d",arr[i]);
	}
	printf("\n");
}
void merge(int *a,int l)
{
	int mid=l/2,low,high;
	if(l%2!=0)
		low=mid,high=mid+1;
	else
		low=high=mid;
	int *a1,*a2;
	a1=(int*)calloc(low,sizeof(int));
	a2=(int*)calloc(high,sizeof(int));
	for(int i=0;i<low;i++)
	{
		a1[i]=a[i];
	}
	for(int i=low;i<l;i++)
	{
		a2[i]=a[i];
	}
	mergesort(a1,a2,a,low,high,l);
}
void mergesort(int *a1,int *a2,int *a,int low,int high,int l)
{int i=0,j=high,k=0;
	while(i<low && j<l)
	{
		if(a1[i]<a2[j])
		{
			a[k++]=a1[i++];
		}
		else if(a1[i]>a2[i])
		{
			a[k++]=a2[j++];
		}
	}
	while(i<low)
	{
		a[k++]=a1[i++];
	}
	while(j<l)
	{
		a[k++]=a2[j++];
	}
}

