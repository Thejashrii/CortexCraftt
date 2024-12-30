/*** longest subarray **/

#include <bits/stdc++.h>
using namespace std;

int longestSubarray(int *a,int n,long long k)
{
	map<long long, int>preSumMap;
	long long sum = 0;
	int maxlen = 0;
	for(int i = 0;i < n;i++)
	{
		sum += a[i];

		if(sum == k)
			maxlen = max(maxlen,i + 1);

		long long rem = sum - k;

		if(preSumMap.find(rem) != preSumMap.end())
		{
			int len = i - preSumMap[rem];
			maxlen = max(maxlen,len);
		}

		if(preSumMap.find(sum) == preSumMap.end())
		{
			preSumMap[sum] = i;
		}
	}
	return maxlen;
}

int main()
{
	int *arr = NULL;
	size_t n ;
	cout<<"enter the array size"<<endl;
	cin>>n;
	arr = new int[n];
	if(arr == NULL)
	{
		cout<<"Memory not allocated"<<endl;
		delete arr;
		exit(EXIT_FAILURE);
	}
	cout<<"enter the array elements"<<endl;
	for(size_t i = 0;i < n;i++)
	{
		cin>>arr[i];
	}
	long long k;
	cout<<"enter the sum to be:"<<endl;
	cin>>k;
	
	cout<<"Longest Subarray is: "<<longestSubarray(arr,n,k)<<endl;
	delete arr;
	exit(EXIT_SUCCESS);
}


