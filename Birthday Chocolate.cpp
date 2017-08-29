#include<iostream>
using namespace std;

int main()
{
	int n,m,d;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cin>>d>>m;
	int count=0;
	
	for(int i=0;i<n-m+1;i++)
	{
		int total=0;
		for(int j=i; j<i+m; j++)
		{
			total = total + arr[j];
		}
		//cout<<"\ntotal.:"<<total;
		
		if(total==d)
			count++;
	}
	
	cout<<count;
	
	return 0;
}
