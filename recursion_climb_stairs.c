#include<stdio.h>
#include<stdlib.h>
int count_jumps(int n)
{
	if(n==0) return 1;
	if(n==1) return 1;
	return count_jumps(n-1)+count_jumps(n-2);
}
int main()
{
	int n;
	printf("enter the n stairs\n");
	scanf("%d",&n);
	printf("%d\n",count_jumps(n));
}
	
