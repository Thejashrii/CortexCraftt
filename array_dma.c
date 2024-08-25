#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int **arr,rows,cols;
	printf("enter no of rows and cols\n:");
	scanf("%d %d",&rows,&cols);
	arr=(int**)calloc(rows,sizeof(int*));
	for(int i=0;i<rows;i++)
	{
		arr[i]=(int*)calloc(cols,sizeof(int));
	}
	srand(getpid());
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			arr[i][j]=(1+rand())%100;
		}
	}
	//printing the array
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<rows,i++)
	{
		free(arr[i]);
	}
	free(arr);
}



