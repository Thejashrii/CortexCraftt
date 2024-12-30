/**max consecutive ones **/

#include<stdio.h>
#include<stdlib.h>


int maxconsecutive(int *a,int n)
{
	int cnt = 0,max = 0,right = 0;
	while(right < n)
	{
		if(a[right] == 1)
		{
			cnt++;
		}
		else
		{
			cnt = 0;
		}

		if(max < cnt)
		{
			max = cnt;
		}
		right++;
	}
	return max;
}


int main()
{
	int *arr = NULL;
	size_t n ;
	printf("enter the array size\n");
	scanf("%ld",&n);
	arr = calloc(n,sizeof(int));
	if(arr == NULL)
	{
		printf("Memory not allocated\n");
		free(arr);
		exit(EXIT_FAILURE);
	}
	printf("enter the array elements\n");
	for(size_t i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Maximum consecutive ones are %d\n",maxconsecutive(arr,n));
	free(arr);
	exit(EXIT_SUCCESS);
}


