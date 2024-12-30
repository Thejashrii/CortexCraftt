/*division optimised  rule - modulo operator
*/
#include<stdio.h>
#include<stdlib.h>

int gcd(int p,int q)
{
	while(p > 0 && q > 0)
	{
		if(p > q)
			return gcd(p%q,q);
	        else
			return gcd(p,q%p);
	}
	if(p == 0) return q;
	return p;
}
	

int main()
{
	int a,b;
	puts("enter the two numbers");
	scanf("%d%d",&a,&b);
	printf("GCD of two numbers is %d\n",gcd(a,b));
	
}

