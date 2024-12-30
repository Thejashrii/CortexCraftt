/*eucliden rule
*/
#include<stdio.h>
#include<stdlib.h>

int gcd(int p,int q)
{
	if(p == q)
		return p;
	if(p > q)
		return gcd(p-q,q);
	else
		return gcd(p,q-p);
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

