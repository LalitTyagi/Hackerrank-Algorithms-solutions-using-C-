#include<iostream>
using namespace std;

int main()
{
	int n,i;
	int a;
	cin>>n;
	int arr[n],arr1[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		arr1[i]=1;
		else
		{
			a=1;
			for(int j=1;j<=arr[i];j++)
			{
				if(j%2==1)
				a=a*2;
				else
				a=a+1;
			}
			arr1[i]=a;
		}
	}
	
	for(i=0;i<n;i++)
	cout<<arr1[i]<<"\n";
	return 0;
	
}
