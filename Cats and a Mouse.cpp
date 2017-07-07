#include<iostream>
using namespace std;
#include<math.h>

int main()
{
	int n,a,b,c;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		a=abs(a-c);
		b=abs(b-c);
		
		if(a==b)
		arr[i]=1;
		else if(a>b)
		arr[i]=2;
		else
		arr[i]=3;
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
		cout<<"Mouse C\n";
		else if(arr[i]==2)
		cout<<"Cat B\n";
		else
		cout<<"Cat A\n";
	}
	
	return 0;
	
}
