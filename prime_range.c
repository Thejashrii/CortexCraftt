#include<stdlib.h>
#include<stdio.h>
int check_prime(int n)
{
        for(int i=2;i<n;i++)
        {
                if((n%i)==0)
                        return 0;
        }
        return 1;
}
int main()
{
        int min,max;
        printf("enter min and max\n");
        scanf("%d %d",&min,&max);
	for(int i=min;i<=max;i++)
	{
        	if(check_prime(i))
			printf("%d ",i);
	}
	printf("\n");
}
