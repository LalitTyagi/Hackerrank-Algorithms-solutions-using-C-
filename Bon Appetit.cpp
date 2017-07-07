#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e=0,f;
	cin>>a>>b;
	int arr[a];
	for(d=0;d<a;d++)
	{
		cin>>arr[d];
		e=e+arr[d];
	}
	f=e-arr[b];
	f=f/2;
	cin>>c;
	if(c>f)
	{
		c=c-f;
		cout<<c;
	}
	else
	cout<<"Bon Appetit";
	
	return 0;
}
