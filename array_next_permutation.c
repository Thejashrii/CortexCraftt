#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void reverse(int *p,int left,int right)
{
	while(left < right)
	{
		int temp = p[left];
		p[left] = p[right];
		p[right] = temp;
		left++;
		right--;
	}
}

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void nextgreaterpermutation(int *a,int n)
{
	int breakpoint = -1; 
	//step: -1 break point
	for(int i = n - 2;i >= 0;i--)
    	{
		if(a[i] < a[i + 1])
		{
			// index i is the break point
			breakpoint = i;
			break;
		}
	}

	//if break point does not exist
	if(breakpoint == -1){
		//reverse the whole array
		reverse(a,0,n-1);
		return ;
	}
	
	//step 2:- find the next greater element and swap it with the arr[breakppoint]
	for(int i = n - 1;i > breakpoint;i--)
	{
		if(a[i] > a[breakpoint]){
			swap(&a[i],&a[breakpoint]);
			break;
		}
	}
	
	//step 3 :- reverse the right half
	reverse(a,breakpoint + 1,n - 1);
}

int main()
{
	int n,*arr = NULL;
	puts("enter the array size");
	scanf("%d",&n);

	arr = calloc(n,sizeof(int));
	if(arr == NULL)
	{
		perror("Memory allocation failed");
		exit(EXIT_FAILURE);
	}

	puts("enter the elements(permutation)");
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	nextgreaterpermutation(arr,n);

	puts("The next permutation is");
	for(int i = 0;i < n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	free(arr);
	arr = NULL;
	exit(EXIT_SUCCESS);
}

