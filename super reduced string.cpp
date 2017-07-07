#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int k=0;
	int n=s.length();
//	cout<<n;
	string s1;
	//for(int i=0;i<n-1;i++)
	for(int j=0;j<=n-1;)
	{
		if(s[j]==s[j+1])
		{
			j+=2;
		}
		else
		{
		s1[k]=s[j];
		cout<<s1[k];
		j++;+k++;	
		}
	}
	s1[k]='\0';
//	cout<<s;
//	cout<<s1;
}
