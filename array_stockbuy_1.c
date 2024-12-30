#include <stdio.h>
#include<stdlib.h>

int maximumProfit(int *prices,int n)
{
    int temp,max_num = 0,min_num = 0;

    for(int i = n - 1;i >= 0;i--)
    {
        if(max_num < prices[i]){
            max_num = prices[i];
        }

        temp = max_num - prices[i];
        if(min_num < temp){
            min_num = temp;
        }
    }
    return min_num;
}

int main()
{
	int n,*arr = NULL;
	puts("enter the array size");
	scanf("%d",&n);

	arr = calloc(n,sizeof(int));
	if(arr == NULL)
	{
		perror("arr");
		free(arr);
		exit(EXIT_FAILURE);
	}

	puts("enter the array elements");
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("The profit we getting on selling the stocks:%d\n",maximumProfit(arr,n));
	free(arr);
	arr = NULL;
	exit(EXIT_SUCCESS);
}

