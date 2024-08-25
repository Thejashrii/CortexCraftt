#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int max_array(int *a,int n)
{int max=0;
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	return max;
}
int main()
{
	int *arr,n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	srand(getpid());
	for(int i=0;i<n;i++)
	{
		arr[i]=rand()%100;
	}
	printf("array elemenst are\n");
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\n");
	printf("%d is largest number in the array\n",max_array(arr,n));
}
	
