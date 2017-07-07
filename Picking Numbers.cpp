#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,a,max=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr[a]++;
	}
	
	for(int i=1;i<n;i++)
	{
		if(arr[i-1]+arr[i]>max)
			max=arr[i-1]+arr[i];
	}
	
	
	cout<<max;
	return 0;
	
}
