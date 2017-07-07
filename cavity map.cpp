#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	
	for(int j=1;j<n-1;j++)
	{
		for(int k=1;k<n-1;k++)
		{
			if(s[j][k]>s[j-1][k])
				if(s[j][k]>s[j+1][k])
					if(s[j][k]>s[j][k-1])	
						if(s[j][k]>s[j][k+1])
							s[j][k]='X';		
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<"\n";
	}
	
	return 0;
	
}
