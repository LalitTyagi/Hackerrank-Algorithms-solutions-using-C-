#include<iostream>
using namespace std;

int main()
{
	int n,a,b,min,max;
	a=0;
	b=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	min=arr[0];
	max=arr[0];
	for(int j=1;j<n;j++)
	{
		if(max<arr[j])
		{
			max=arr[j];
			a++;
		}
		else if(max>arr[j])
		{
			if(min>arr[j])
			{
				min=arr[j];
				b++;
			}
		}
	}
	
	cout<<a<<" "<<b;
	return 0;
}
