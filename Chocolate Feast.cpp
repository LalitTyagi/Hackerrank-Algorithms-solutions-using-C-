#include<iostream>
using namespace std;

int main()
{
	
	long int t,n,c,m,a,b,d;
	cin>>t;
	long arr[t];
	
	for(int i=0;i<t;i++)
	{
		cin>>n>>c>>m;
		
		a=n/c;
		b=a/m;
		d=a%m;
		a=a+b;
		
		while(b+d>m)
		{	
			b=b+d;
			b=b/m;
			d=d%m;
			a=a+b;
			
		}
		
		if(b+d==m)
				a=a+1;
		
		arr[i]=a;
	}
	
	for(int i=0;i<t;i++)
	{
		cout<<arr[i]<<"\n";
	}
	
	return 0;
}
