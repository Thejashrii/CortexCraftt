#include<stdio.h>
int main()
{
	int a,b,x,y;
	printf("enter 2 numbers\n");
	scanf("%d %d",&x,&y);
	a=x;
	b=y;
	while(a!=b)
	{
		if(a<b)
			a+=x;
		else
			b+=y;
	}
	a=x,b=y;
	while(a!=b)
	{
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	printf("LCM of %d,%d is %d\n",x,y,a);
	printf("HCF of %d,%d is %d\n",x,y,a);
}
