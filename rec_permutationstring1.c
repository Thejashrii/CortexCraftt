#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int q=0;
void permutation(char *a,char *a1,int left,int right,int j,char (*res)[50],int *freq)
{
	if(left>=right){
		for(int k=0;k<right;k++)
		{
			res[q][k]=a1[k];
		}
		q++;
		return;
	}
	for(int i=0;i<right;i++)
	{
		if(!freq[i]){
		a1[j]=a[i];
		freq[i]=1;
		permutation(a,a1,left+1,right,j+1,res,freq);
		freq[i]=0;
		}
	}
}

int main()
{
	char str[50],str1[50],result[10][50];
	int *freq=NULL;
	printf("enter the array string\n");
	gets(str);
	int n=strlen(str);
	freq=(int *)malloc(n*sizeof(int));
	permutation(str,str1,0,n,0,result,freq);
	for(int i=0;i<q;i++)
	{
		printf("%s\n",result[i]);
	}
	free(freq);
}
