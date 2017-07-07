#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++)
	{
		long int j,m=0;
		string s;
		cin>>s;
		j=s.length();
		for(int k=0,l=j-1;k<j-1,l>0;k++,l--)
		{
			if(abs((int)s[k+1]-(int)s[k])!=abs((int)s[l-1]-(int)s[l]))
			break;
			else
			m++;
		}
		j=j-1;
		if(m==j)
		arr[i]=1;
		else
		arr[i]=0;
	}
	
	for(int i=0;i<t;i++)
	{
		if(arr[i]==1)
			cout<<"Funny\n";
		else
			cout<<"Not Funny\n";
	}
	return 0;
}
