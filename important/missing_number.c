#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,sum = 0,*arr = NULL;
	printf("enter size of array\n");
	scanf("%d",&n);
	arr = calloc(n,sizeof(int));
	if(arr == NULL)
	{
		printf("Memory allocation error\n");
		free(arr);
		exit(0);
	}
	printf("enter the elements of the array\n");
	for(int i=0;i<n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	/*for(int i=0;i<n-1;i++)
	{
		sum += arr[i];
	}
	printf("missing number is %d\n",(n*(n+1))/2 - sum);*/
	// method 2:- hashing
	//
	/* int hash[n+1];
	 for(int i=0;i<n;i++)
	 {
		 hash[i] = 0;
	 }
	 for(int i=0;i<n-1;i++)
	 {
	 	hash[arr[i]]++;
	 }
	 for(int i=1;i<=n;i++)
	 {
	 	if(hash[i] == 0) printf("Missing number %d\n",i);
	    }
	 */
	//method -3 xor operation
	 int xor = 0,xor2 = 0;
	for(int i=0;i<n-1;i++)
	{
		xor ^=arr[i];
	}
	for(int i=1;i<=n;i++)
	{
		xor2 ^=i;
	}
	printf("Missing number is %d\n",xor^xor2);	
	free(arr);
}


