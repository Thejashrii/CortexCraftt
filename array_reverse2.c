#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void reverse_array(int *p,int n)
{int temp=0;
	for(int i=0,j=n-1;i<j;i++,j--)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");
}

int main()
{
	int *arr,n;
	printf("enter the sizeof array\n");
	scanf("%d",&n);
	arr=calloc(n,sizeof(int));
	srand(getpid());
	for(int i=0;i<n;i++)
	{
		arr[i]=rand()%50;
	}
	printf("array elements are\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("array elements after reversing\n");
	reverse_array(arr,n);
}

