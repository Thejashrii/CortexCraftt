/**maximum subarray with given k(positives) **/

#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100000 //Define a suitable size for the hash table

//Hash table structure

typedef struct
{
	long long key;
	int value;
}HashNode;

HashNode hashTable[MAX_SIZE];


//Hash Function - to fit the key in the given hash size range

int hashFunction(long long key){
	return (abs(key) % MAX_SIZE);
}

//search in hash table
int search(long long key)
{
	int index = hashFunction(key);
	while(hashTable[index].key != 0 || hashTable[index].value != 0)
	{
		if(hashTable[index].key == key){
			return hashTable[index].value;//key found
		}

	index = (index + 1) % MAX_SIZE;
	}

	return -1; //key not found
}

//insert into hash table
void insert(long long key,int value)
{
	int index = hashFunction(key);
	while(hashTable[index].key != 0 || hashTable[index].value != 0)
	{
		if(hashTable[index].key == key)
			return; //key alredy exists,do not update
		index = (index + 1) % MAX_SIZE;
	}
	hashTable[index].key = key;
	hashTable[index].value = value;
}

//function to find the length of the longest subarray
int getlongestSubarray(int *a,int n,long long k)
{
	long long sum = 0;
	int maxlen = 0;

	//initilaize hash table
	for(int i = 0;i < MAX_SIZE;i++){
		hashTable[i].key = 0;
		hashTable[i].value = 0;
	}

	//Traverse the array
	for(int i = 0;i < n;i++)
	{
		sum += a[i];

		if(sum == k)//update maxlen
		{
			maxlen = i + 1;
		}

		//check if (sum - k) exists in hash table
		long long rem = sum - k;
		int index = search(rem);
		if(index != -1)
		{
			int len = i - index;
			if(len > maxlen) maxlen = len;
		}
		
		//Insert current su into the hash table if it soesnt exit
		if(search(sum) == -1){
			insert(sum,i);
		}
	}

	return maxlen;
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
	long long k;
	printf("enter the sum\n");
	scanf("%lld",&k);
		
	printf("The length of thr longest subarray is:%d\n",getlongestSubarray(arr,n,k));
	free(arr);
	arr = NULL;
	exit(EXIT_SUCCESS);
}


