#include<stdio.h>
#include<stdlib.h>
int main()
{
	int d,n=0,arr[10];
	printf("enter the dec num\n");
	scanf("%d",&d);
	while(d>0)
	{
		arr[n]=d%2;
		d/=2;
		n++;
	}
	printf("binary no is\n");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
		
}

