/**find longest subarray with at most k zeroes  or 
 *
 *
 * find the max consecutive 1's subarray len if any k ofthe zeroes can be filpped in the array ***/
/** time complexity O(N2)
 * space complexity  O(1);
 */
#include<stdio.h>
#include<stdlib.h>

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
	int len=0,zeroes=0,maxlen=0,sum=0;
	for(int i=0;i<n;i++)
	{
		zeroes=0;
		for(int j=i;j<n;j++)
		{
			if(arr[j]==0) zeroes++;
			if(zeroes<=k){
				len = j-i+1;
				if(maxlen<len) maxlen=len;
			}
			else break;
		}
	}
	printf("%d",maxlen);
}


