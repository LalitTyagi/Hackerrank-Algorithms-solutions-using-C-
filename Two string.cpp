#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int arr[t];
	
	for(int i=0;i<t;i++)
	{
		string s1,s2;
		string s3="abcdefghijlkmnopqrstuvwxyz";
		long long int b=0;
		cin>>s1>>s2;
		for (int j=0;j<26;j++)
		{
            if (s1.find(s3[j])!=string::npos && s2.find(s3[j])!=string::npos)
            	{
            		b=1;
            		break;
            	}
		}
		arr[i]=b;
	}
	for(int i=0;i<t;i++)
	{
		if(arr[i]==0)
		cout<<"NO\n";
		else
		cout<<"YES\n";	
	}
	
	return 0;
}
