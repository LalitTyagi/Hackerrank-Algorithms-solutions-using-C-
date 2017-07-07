#include<iostream>
using namespace std;

int main()
{
	int n,t,min,a,b;
	cin>>n>>t;
	int arr[n],arr1[t];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<t;j++)
	{
		min=0;
		cin>>a>>b;
		min=arr[a];
		for(int k=a+1;k<=b;k++)
		{
			if(arr[k]<min)
			min=arr[k];
		}
		arr1[j]=min;
	}
	
	for(int j=0;j<t;j++)
	{
		cout<<arr1[j]<<"\n";
	}
	
	return 0;
}
