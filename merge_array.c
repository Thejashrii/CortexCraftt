#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void merge(int *,int *,int *,int,int);
int main()
{
	int arr1[MAX],arr2[MAX],arr3[MAX],n1,n2;
	printf("enter the no of elements(array1 and array2):\n");
	scanf("%d %d",&n1,&n2);
	printf("enter the array 1 elements in descending order\n");
	for(int i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter the array 2 elements in descending order\n");
	for(int j=0;j<n2;j++)
	{
		scanf("%d",&arr2[j]);
	}
	merge(arr1,arr2,arr3,n1,n2);
	for(int i=0;i<n1+n2;i++)
		printf("%d ",arr3[i]);
	printf("\n");
	return 0;
}

void merge(int *a,int *b,int *c,int n1,int n2)
{int i=0,j=0,k=0;
	while((i<=n1-1) && (j<=n2-1))
	{
		if(a[i]>b[j])
		{
			c[k++]=a[i++];
		}
		else
		{
			c[k++]=b[j++];
		}
	}
	while(i<=n1-1)
	{
		c[k++]=a[i++];
	}
	while(j<=n2-1)
	{
		c[k++]=b[j++];
	}
}



