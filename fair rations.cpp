#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}	
	
	int a=0;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]%2==1)
		{
			arr[i]=arr[i]+1;
			arr[i+1]=arr[i+1]+1;
			a=a+2;
		}
	}
	
	if(arr[n-1]%2==1)
	cout<<"NO";
	else
	cout<<a;
	
	return 0;
}
