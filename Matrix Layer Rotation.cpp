#include<iostream>
using namespace std;

int main()
{
	int m,n,k,a,b,c,d;
	cin>>m>>n;
	
	if(m>n)
		c=m;
	else if(m<n)
		c=n;
	else
		c=m;
	d=0;	
	while(c>0)
	{
		d++;
		c-=2;
	}
	
	
	
	int arr[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		cin>>arr[i][j];
	}
	
	a=arr[0][0];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==a)
			b=1;
			else
			{
				b=-1;
				break;
			}
		}
		if(b==-1)
		break;
	}
	
	if(b==1)
	{
		for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
				cout<<arr[i][j];
			}
	}
	else 
	cout<<"jo bhi main";
	
}
