#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	int t,n,l,m,a,b,c,d,j;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
		int f[26]={0},S[26]={0};
		c=0;
		m=s.length();
		l=m%2;
		if(l==1)
			a=-1;
		else
		{
			for(j=0;j<m/2;j++)
			{
				b=(int)s[j];
				b=b%97;
				f[b]++;
			}
			for(j=m/2;j<m;j++)
			{
				b=(int)s[j];
				b=b%97;
				S[b]++;
			}
			for(j=0;j<26;j++)
			{
				c+=abs(f[j]-S[j]);
			}
			c=c/2;
			a=c;
		}
		
		arr[i]=a;
	}
	
	for(int i=0;i<t;i++)
	{
		cout<<arr[i]<<"\n";
	}

	return 0;
}
