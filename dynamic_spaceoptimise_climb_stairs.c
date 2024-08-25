#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,cur=1,prev=1,next=0;
	printf("enter the n stairs\n");
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		next=prev+cur;
		prev=cur;
		cur=next;
	}
		printf("%d\n",next);
}
	
