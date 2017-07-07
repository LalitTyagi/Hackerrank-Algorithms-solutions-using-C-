#include<iostream>
using namespace std;

int main()
{
	string a;
	long long int b,c,d,e=0,f,g;
	cin>>a>>b;
	c=a.length();
	d=b/c;
	g=b%c;
	for(f=0;f<c;f++)
	{
		if(a[f]=='a')
		e++;
	}
	d=d*e;
	e=0;
	for(int j=0;j<g;j++)
	{
		if(a[j]=='a')
		e++;
		
	}
	d=d+e;
	cout<<d;
	return 0;
}
