/*divisio optimised  rule
 * if smaller number divisible by larger number then smaller is the factor amd hcf
*/
#include<stdio.h>
#include<stdlib.h>

int gcd(int p,int q)
{
	if(p == q)
		return p;
	if(p > q)
	{
		if(p%q == 0)
			return q;
		return gcd(p-q,q);
	}
	else
	{
		if(q % p == 0)
			return p;
		return gcd(p,q-p);
	}
}
	

int main()
{
	int a,b;
	puts("enter the two numbers");
	scanf("%d%d",&a,&b);
	 if(a == 0)
		printf("GCD of two numbers is %d\n",b);
	else if(b == 0)
		printf("GCD of two numbers is %d\n",a);
	else 
		printf("GCD of two numbers is %d\n",gcd(a,b));
	
}

