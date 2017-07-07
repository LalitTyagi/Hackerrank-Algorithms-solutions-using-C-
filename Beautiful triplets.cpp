#include<iostream>
using namespace std;

int main()
{
	long int n,i,j,k;
	int d,a=0,b=0;
	cin>>n>>d;
	long arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			if(arr[j]-arr[i]==d)
			{
				for(int k=i+1;k<n;k++)
				{
    			 if(arr[k]-arr[j]==d)
					{
        			a++;
        			break;
					}
				}
				break;
			}
			
		}
	}
	
	cout<<a;
	
	return 0;
}
