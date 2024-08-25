#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define NEW_LINE  printf("\n");

void init(int *a[],int r,int c)
{
	srand(getpid());
	for(int i=0;i<r;i++)
        {
                for(int j=0;j<c;j++)
                {
                        a[i][j]=1+(rand()%100);
                }
        }
}

void print(int *a[],int r,int c)
{
	for(int i=0;i<r;i++)
        {
                for(int j=0;j<c;j++)
                {
                        printf("%3d",a[i][j]);
                }
                NEW_LINE;
        }
}

int main()
{
	int rows,cols;
	printf("enter no of rows and cols\n:");
	scanf("%d %d",&rows,&cols);
	int** arr=(int**)calloc(rows,sizeof(int*));
	for(int i=0;i<rows;i++)
	{
		arr[i]=(int*)calloc(cols,sizeof(int));
	}
	init(arr,rows,cols);
	print(arr,rows,cols);
	for(int i=0;i<rows;i++)
	{
		free(arr[i]);
	}
	free(arr);
}


