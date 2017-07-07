#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	long n,m,i,j=0;
	cin>>n>>m;
	string s1;
	cin>>s1;
	string s2(s1);
	string s3(s1);
	reverse(s2.begin(),s2.end());
	//cout<<s2;
	for(i=0;i<n;i++)
	{
		if(s1[i]!=s2[i])
		j++;
	}
	j=j/2;
	if(j<=m)
	{
		cout<<"1";
	}
	else
	{
		cout<<"-1";
	}
	
	return 0;
}
