#include<iostream>
using namespace std;

int main()
{
	long a,b,c,d;
	cin>>a>>b>>c;
	int a1[a],a2[a],a3[c];
	for(long i=0;i<a;i++)
	cin>>a1[i];
	if(a<b)
	b=b%a;
	
	
	for(long i=0;i<c;i++)
	cin>>a3[i];

	
	for(long j=a-b,i=0;j<a,i<b;j++,i++)
	{
	a2[i]=a1[j];	
	}
	
	for(long k=0,i=b;k<a-b,i<a;k++,i++)
	{
	a2[i]=a1[k];	
	}
		
	for(long i=0;i<c;i++)
	{
		d=a3[i];
		cout<<a2[d]<<"\n";
	}
}
