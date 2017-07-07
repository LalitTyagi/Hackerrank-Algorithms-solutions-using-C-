#include<iostream>
using namespace std;

int main()
{
	int n,m,i;
	cin>>n>>m;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	int a=0;
	int b,j,k;
	b=1;
	
	for(i=0;i<n;i++)
	{
		k=j=1;
		for(int r=0;r<arr[i];r++)
		{
			if(j==b)
			a++;
			
			if(j==arr[i])
			b++;
			else if(j==(m*k)) 
			{
				b++;
				k++;
			}
			j++;			
		}
	}	
	cout<<a;
	return 0;
}
