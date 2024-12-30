#include<stdio.h>
#include<stdlib.h>


int linear_search(int *p,int n)
{
	int len = 0;
	int j = 0;
	while(j < n)
	{
		int 
		{
			len = j - i + 1;
			break;
		}
		j++;
	}
	return len;

}

int main()
{
	int *a = NULL,n;
	puts("enter the size of the array");
	scanf("%d",&n);
	
	a = malloc(n*sizeof(int));
	if(a == NULL)
	{
		perror("Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	puts("enter the array elements");
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}

	int maxlen = linear_search(arr,n);

	printf("%d\n",maxlen);

	return 0;
}

