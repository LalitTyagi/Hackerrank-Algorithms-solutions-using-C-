#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s,s1;
	cin>>s;
	int l,c;
	c=1;
	int n=s.length();
	for(int i=0;i<n-1;i++)
		if(int(s[i])>=65 && int(s[i])<=90 )
			c++;
			//cout<<"\n";
			//cout<<s[i];


		cout<<c;

	return 0;
}
