#include<iostream>
using namespace std;

int main()
{
	long int n,p;
	cin>>n>>p;
	if((n/2)>=p)
	cout<<(p/2);
	else
	cout<<((n-p)/2);
	return 0;
}
