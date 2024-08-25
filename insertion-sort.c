#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void insertion_sort(int *,int);
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
	insertion_sort(arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");
}
void insertion_sort(int *a,int l)
{int temp,j;
	for(int i=1;i<l;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0 && (a[j]>temp);j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
}

