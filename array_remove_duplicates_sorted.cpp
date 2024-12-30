#include<bits/stdc++.h>

using namespace std;

int removedup(int arr[],int n)
{
	set<int> set;
	for(int i = 0;i < n;i++)
	{
		set.insert(arr[i]);
	}

	int k = set.size();
	int j = 0;

	for(int x: set)
	{
		arr[j++] = x;
	}
	return k;
}
int main()
{
	int *a = NULL;
	int n;
	cout<<"enter the array size"<<endl;
	cin>>n;
	a = new int[n];
	cout<<"enter the array elements"<<endl;
	for(int i = 0;i < n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);

	int k = removedup(a,n);
	for(int i = 0;i < k;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	delete a;
}




