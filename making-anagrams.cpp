#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	string s,s1;
	cin>>s;
	cin>>s1;
	int F[26]={0},S[26]={0};
	int a,b,c=0;
	
		for(int j=0;j<s.length();j++)
			{
				a=(int)s[j];
				a=a%97;
				F[a]++;
			}
		for(int j=0;j<s1.length();j++)
			{
				b=(int)s1[j];
				b=b%97;
				S[b]++;
			}
		for(int j=0;j<26;j++)
		{
			c+=abs(F[j]-S[j]);
		}
		
		cout<<c;
	return 0;
}
