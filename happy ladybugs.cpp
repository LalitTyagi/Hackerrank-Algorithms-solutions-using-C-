#include<iostream>
using namespace std;

int main()
{
	/*
	char c;
	cin>>c;
	int a=c/'z';
	cout<<a;
	*/
	
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		int m;
		string s;
		cin>>m>>s;
		int arr1[31]={0};
		for(int j=0;j<m;j++)
		{
			arr1[s[j]-'A']++;
		}
		int a=0;
		for(int j=0;j<26;j++)
		{
			if(arr1[j]==1)
			{
				a=1;
				break;
			}
		}
		
		int b=0;
		for(int j=0;j<26;j++)
		{
			if(arr1[j]!=0)
			b++;
		}
			
		if(a==0 && b>1)
		{
			
			if(arr1[30]==0)
			{
				a=1;
			}
		}
		
		
		arr[i]=a;
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	
	return 0;
}
