#include<iostream>
using namespace std;

int main()
{
	long long int n,m,k=0,l=1,i,j;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cin>>m;
	int arr1[m];
	int arr3[m];
	for(j=0;j<m;j++)
	{
		cin>>arr1[j];
	}
	
	int arr2[n];
	arr2[0]=arr[0];
	
	for(i=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1])
		{
			arr2[l]=arr[i];
			l++;
		}
	}
	
	for(i=m-1;i>=0;i--)
		for(j=k;j<l;j++)
		{
			if(arr2[j]<=arr1[i])
			{
				//cout<<(j+1)<<"\n";
				arr3[i]=j+1;
				k=j;
				break;
			}				
		}
		
		if(arr2[l-1]>arr1[0])
			{
				//cout<<(l+1);
				arr3[0]=l+1;
			}
			
		for(int i=0;i<m;i++)
		cout<<arr3[i]<<"\n";	
	
	
	return 0;
}
