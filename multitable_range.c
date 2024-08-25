#include<stdio.h>
int main()
{
	int min,max,cnt=0;
	printf("enter the min and max numbers\n");
	scanf("%d %d",&min,&max);
	int temp=max;
	while(temp>0)
	{
		int rem=temp%10;
		cnt++;
		temp/=10;
	}
	int width=cnt+2;
	for(int i=min;i<=max;i++)
	{
		for(int j=1;j<=10;j++)
		{
			printf("%*d",width,i*j);
		}
		printf("\n");
	}
}


