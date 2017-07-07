#include<iostream>
using namespace std;

int main()
{
	int c1,n;
	c1=0;
	cin>>n;
	int arr[n];
	for(int j=0;j<n;j++)
	cin>>arr[j];
	for(int i=0;i<n;)
	{
		if(arr[i+2]==0)
		{
			i=i+2;
			c1++;
		}
		else if(arr[i+1]==0)
		{
			i=i+1;
			c1++;
		}
		else{
			c1++;
			break;
		}
		
	}
	cout<<c1-1;
	return 0;
}
