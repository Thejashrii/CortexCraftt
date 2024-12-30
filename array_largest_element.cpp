#include <bits/stdc++.h>

using namespace std;


int findlargest(int *a,int n)
{
	int max = a[0];
	for(int i = 1;i < n;i++)
	{
		if(max < a[i]) max = a[i];
	}
	return max;
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
		free(arr);
		exit(EXIT_FAILURE);
	}
	cout<<"enter the array elements"<<endl;
	for(size_t i = 0;i < n;i++)
	{
		cin>>arr[i];
	}
	int max_value = findlargest(arr,n);
	cout<<"The largest element is :"<<max_value<<endl;
	free(arr);
}


