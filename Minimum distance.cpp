#include<iostream>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int arr[n];
	int arr1[n];
	int k;
	int min=100000;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				k=j-i;
				if(min>k)
				min=k;
			}
		}	
	if(min==100000)
	cout<<"-1";
	else
	cout<<min;
	return 0;
}
