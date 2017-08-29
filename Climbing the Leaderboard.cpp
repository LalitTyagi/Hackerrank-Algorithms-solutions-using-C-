#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	long arr[n];
	long arrR[n];
	for(long i=0;i<n;i++)
		cin>>arr[i];
	
	arrR[0]=1;
	for(long i=1;i<n;i++)
	{
		if(arr[i]<arr[i-1])
			arrR[i]=arrR[i-1]+1;
		else
			arrR[i]=arrR[i-1];
	}
	
//	for(long i=0;i<n;i++)
//		cout<<arrR[i];
		
	cin>>m;
	long rank[m];
	long k=0;
	for(long i=0;i<m;i++)
	{	
		long score;
		cin>>score;
		if(score>arr[0])
		{
			rank[k]=1;
			k++;	
		}
		else
			for(long i=n-1;i>=0;i--)
			{
				if(score<arr[i])
				{
					rank[k]=arrR[i] + 1;
					k++;
					break;
				}
				else if(score==arr[i])
				{
					rank[k]=arrR[i];
					k++;
					break;
				}		
			}	
	}
	
	for(long i=0;i<k;i++)
		cout<<rank[i]<<"\n";
		
	return 0;
}
