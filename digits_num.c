#include<stdio.h>
int main()
{
	int cnt=0,rem,num;
	printf("enter the num:\n");
	scanf("%d",&num);
	int temp=num;
	while(num>0)
	{
		rem=num%10;
		num/=10;
		cnt++;
	}
	printf("no of digits in a %d is %d\n",temp,cnt);
}
