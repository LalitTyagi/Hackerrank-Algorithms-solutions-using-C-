#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	s.erase( remove( s.begin(), s.end(), ' ' ), s.end() );
	long int n,i;
	int a,b=0,arr[26];
	for(int j=0;j<26;j++)
	{
		arr[j]=0;
	}
	n=s.length();
	for(i=0;i<n;i++)
	{
		a=(int)s[i];
		if(a>91)
		{
			a=a-97;
		}
		else
		{
			a=a-65;
		}
		
		arr[a]=1;
	}
	for(int j=0;j<26;j++)
	{
		if(arr[j]==0)
		{
			break;
		}
		else
		b++;
	}
	
	if(b==26)
	cout<<"pangram";
	else
	cout<<"not pangram";
	return 0;
}
