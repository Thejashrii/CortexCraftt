/**SLIDING WINDOW 
 * /**find longest subarray with at most k zeroes  or 
 *
 *
 * find the max consecutive 1's subarray length if any k ofthe zeroes can be filpped in the array ***/
/** time complexity O(N)
 * space complexity  O(1);
 */
#include<stdio.h>
#include<stdlib.h>


int findmaxones(int *p,int n,int k)
{
	int left=0,right=0;
	int max=0,zero=0;

	while(right<n){
		if(p[right]==0) zero++;

		while(zero > k)
		{
			if(p[left]==0) zero--;
			left++;
		}

		max = (right - left + 1) > max ? (right - left + 1) : max;

		right++;
	}
	return max;
}
int main()
{
	int *arr=NULL;
	size_t n;
	puts("enter the size of the array");
	scanf("%zu",&n);
	
	arr=calloc(n,sizeof(int));
	if(arr==NULL){
		perror("Memory allocation error");
		return EXIT_FAILURE;
	}
	puts("enter the array elements");
	for(int i=0;i<n;i++)
	{
		if(scanf("%d",&arr[i])!=1)
		{
			fprintf(stderr,"invalid input\n");
			free(arr);
			return EXIT_FAILURE;
		}
	}
	
	int k;
	puts("enter the k value");
	scanf("%d",&k);
	printf("%d",findmaxones(arr,n,k));
}


