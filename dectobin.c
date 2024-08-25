#include<stdio.h>
#include<stdlib.h>
int main()
{
	int rem,rev=0,a=1,num;
	printf("enter the number\n");
	scanf("%d",&num);
/*	while(num>0)
	{
	rem=num%2;
	num/=2;
	rev=(rem*a)+rev;
	a*=10;
	}*/
	int j,i=0,arr[10];
	while(num>0)
	{
		rem=num%2;
		num/=2;
		arr[i++]=rem;
	}
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
}



