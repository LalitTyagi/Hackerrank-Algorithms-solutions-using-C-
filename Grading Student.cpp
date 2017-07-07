#include<iostream>
using namespace std;

int main()
{
	int n,a;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>=38)
		{
			a=arr[i]%5;
			if(a>2)
			{
				arr[i]=arr[i]+(5-a);
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\n";
	}

	return 0;
}
