#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,m,a=0;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr+0,arr+n);
	
	if(arr[n-1]>m)
	a=arr[n-1]-m;
	
	
	cout<<a;
	return 0;
}
