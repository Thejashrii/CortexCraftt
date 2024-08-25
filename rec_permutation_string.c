#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int q=0;
void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
void permutation(char *a,int left,int right,char (*res)[10])
{
	if(left==right){
		strcpy(res[q],a);
		q++;
		return;
	}
	for(int i=left;i<right;i++)
	{
		swap(&a[left],&a[i]);
		permutation(a,left+1,right,res);
		swap(&a[left],&a[i]);//backtrack
	}
}

int main()
{
	char *arr=NULL,result[20][10];
	int n;
	printf("enter the string size\n");
	scanf("%d",&n);
	arr=(char *)malloc(n*sizeof(char));
	printf("enter the string\n");
	gets(arr);
	permutation(arr,0,n,result);
	for(int i=0;i<q;i++)
	{
		printf("%s\n",result[i]);
	}
	free(arr);
}
