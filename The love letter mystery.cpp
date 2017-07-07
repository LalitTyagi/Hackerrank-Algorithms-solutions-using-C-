#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long int m,l,k,j,a,b;
	string arr[n];
	int arr1[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		b=0;
		l=arr[i].length();
		k=l/2;
		for(j=0;j<k;j++)
		{
			a=abs((int)arr[i][j]-(int)arr[i][l-j-1]);
			if(a!=0)
			b=b+a;
		}
		
		arr1[i]=b;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr1[i]<<"\n";
	}
	
	return 0;
}
