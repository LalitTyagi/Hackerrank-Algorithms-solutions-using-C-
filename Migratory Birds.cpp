#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int i,n,a,max;
	cin>>n;
	 int arr[n],arr1[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		arr1[i]=arr[i];
	}
	
	
	for(i=1;i<n;i++)
	{
		arr[arr[i]%n]+=n;
	}
	
	max=arr[0];
	a=0;
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
			a=i;
		}
	}
	
	cout<<a;
	return 0;
}
