#include<iostream>
#include<math.h>
using namespace std;

int min(int *arr1,int m)
{
	int minm=arr1[0];
	for(long i=1;i<m;i++)
	{
		if(arr1[i]<minm)
		minm=arr1[i];
	}
			return minm;
}

int max(int *arr2,int n)
{
	int maxm=arr2[0];
	for(long i=1;i<n;i++)
	{
		if(arr2[i]>maxm)
			maxm=arr2[i];
	}
			return maxm;
}

int main()
{
	int n,m;
	int a=0;
	cin>>n>>m;
	int arr[m],arr1[m],arr2[n];
	
	for(long i=0;i<m;i++)
	{
		cin>>arr[i];
	}
	
	for(long i=0;i<n;i++)
	{
		for(long j=0;j<m;j++)
		{
			arr1[j]=abs(arr[j]-i);
		}
		arr2[i]=min(arr1,m);
	}
	
	int c=max(arr2,n);
	cout<<c;
	
	return 0;
}
