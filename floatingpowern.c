#include<stdio.h>
#include<stdlib.h>
float power(float a,int n)
{
	if(n==0)
		return 1;
	return a*power(a,n-1);
}
int main()
{
	float a,p;
	int n;
	printf("enter a and n\n");
	scanf("%f %d",&a,&n);
	printf("%f\n",power(a,n));
}
