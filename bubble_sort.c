#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void bubble_sort(int *,int);
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
	bubble_sort(arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%3d",arr[i]);
	}
	printf("\n");
}
void bubble_sort(int *a,int l)
{int temp=0,flag;
	for(int i=0;i<l-1;i++)
	{
		flag=0;
		for(int j=0;j<l-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				flag=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
}

