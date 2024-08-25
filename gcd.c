#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0) return a;
	return gcd(:wq
			b,a%b);
}
int main()
{
	int a,b;
	printf("enter a and b\n");
	scanf("%d %d",&a,&b);
	printf("%d\n",gcd(a,b));
}

