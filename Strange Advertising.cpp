#include<iostream>
using namespace std;

int main()
{
	int a=5,b,c=0;
	cin>>b;
	for(int i=0;i<b;i++)
	{
		a=a/2;
		c=c+a;
		a=a*3;
	}
	cout<<c;
	 return 0;	
}
