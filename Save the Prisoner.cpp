#include<iostream>
using namespace std;

int main()
{
	int a,b,c,n,q;
	cin>>n;
	int arr[n];
	for(int k=0;k<n;k++)
	{
		cin>>a>>b>>c;
		int arr1[k][a];
		int d=(b%a);
		int e=(b/a);
		if(d==0&&e==1)
		{
			q=b;
			
		}
		else
		{
			q=(c+d)-1;
			if(q>a)
				q=q-a;
				
		}
			
		arr[k]=q;	
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"\n";
	return 0;
}
