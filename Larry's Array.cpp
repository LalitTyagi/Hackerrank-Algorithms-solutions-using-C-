#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int res[n];
	for(i=0;i<n;i++)
	{
		long long int m,j,k,swap=0;
		cin>>m;
		int arr[m];
		
		for(j=0;j<m;j++)
		{
			cin>>arr[j];
		}
		
		for(k=0;k<m;k++)
		{
			for(j=0;j<m-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
					swap++;	
				}	
			}
		}
		
		//cout<<"Swap"<<swap<<"\n";
		res[i]=swap;

	}
	for(i=0;i<n;i++)
	{
		if(res[i]%2==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;	
}
