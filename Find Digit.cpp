#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i,m,temp;
	int a[n],a1[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		a1[i]=a[i];	
	}
	
	for(i=0;i<n;i++)
	{
		m=0;
		while(a1[i]>0)
		{
			temp=a1[i]%10;
			a1[i]=a1[i]/10;
			if(temp==0)
			{}
			else
			{
				if(a[i]%temp==0)
				m++;
			}
		}
		cout<<m<<"\n";
	}
	
	return 0;
}
