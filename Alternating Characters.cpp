#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n,k;
	cin>>n;
	long int m,arr1[n];
	string arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		k=0;
		m=arr[i].length();
		for(long int j=1;j<m;j++)
		{
			if(arr[i][j]==arr[i][j-1])
			k++;
		}
		arr1[i]=k;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr1[i]<<"\n";
	}
	
	return 0;
	
}
	
