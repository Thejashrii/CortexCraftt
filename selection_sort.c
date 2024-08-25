#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void selection(int *,int);
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
	selection(arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");
}
void selection(int *a,int l)
{int temp=0,min;
	for(int i=0;i<l-1;i++)
	{
		min=i;
		for(int j=i+1;j<l;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}
		if(i!=min)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}

