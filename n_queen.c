#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void n_queen(int **p,int n)
{
	for(int j=0;j<n;j++)
	{



int main()
{
	int *arr=NULL,n;
	printf("enter the array size\n");
	scanf("%d",&n);
	arr=(int **)malloc(n*sizeof(int *));
	for(int i=0;i<n;i++)
	arr[i]=(int *)malloc(n*sizeof(int));
	if(arr==NULL){
		perror("failed to allocate memory\n");
		return 0;
	}
	n_queen(arr,n);
}
