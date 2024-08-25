#include<stdio.h>
void convert(int num,int c)
{
	if(num==0)
		return;
	int rem=num%c;
	convert(num/c,c);
	if(rem<10)
		printf(" %d",rem);
	else
		printf(" %c",rem-10+'A');

}
		
int main()
{
	int n;
	printf("enter the n\n");
	scanf("%d",&n);
	convert(n,2);
	printf("\n");
	convert(n,8);
	printf("\n");
	convert(n,16);
	printf("\n");
}

