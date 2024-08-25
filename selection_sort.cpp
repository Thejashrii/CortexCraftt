#include<bits/stdc++.h>
using namespace std;

void selection_sort(int *arr,int n)
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[min]>arr[j])
				min=j;
		}
		if(i!=min)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
}


int main()
{
	int n;
	cout<<"enter the array size:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the array elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selection_sort(arr,n);
	cout<<"array element after sorting:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

