#include<stdio.h>
#include<stdlib.h>
int * count_stairs(int n,int *dp)
{
	if(n==0){
	       	dp[0]=1;
		return dp;
	}
	dp[0]=1;
       	dp[1]=1;
	for(int i=2;i<=n;i++)
	dp[i]=dp[i-1]+dp[i-2];
	return dp;
}
int main()
{
	int n;
	printf("enter the n stairs\n");
	scanf("%d",&n);
	int dp[n+1];
	int *res=count_stairs(n,dp);
	for(int i=0;i<n;i++)
		printf("%d ",res[i]);
	printf("\n");
}
	
