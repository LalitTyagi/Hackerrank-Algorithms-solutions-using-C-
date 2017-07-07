#include<iostream>
using namespace std;
long calc(long n,long time,long val)
{
	if(n<val+time)
	{
		long temp=n-time;
		return val-temp;
	}
	else
	return calc(n,time+val,val*2);
}
int main()
{
	long n;
	cin>>n;
	cout<<calc(n,1,3);
}
