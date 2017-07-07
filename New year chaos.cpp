#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int arr[t];
	for(int q=0;q<t;q++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)
		cin>>a[i];
		int b=0;
		int c=0;
		for(int i=1;i<=n;i++)
		{
			if((a[i]<=i+2) && (a[i]>=i-2) || (a[i]==i))
			{
				b++;
			}
			else
			{
				c=-1;
				break;
			}
		}
		if(b==n)
		{
			for(int i=1;i<=n;i++)
			{
				if(a[i]!=i)
				{
					int t=a[i];
					a[i]=a[t];
					a[t]=t;
					c++;
				}			
			}
		
		}
		arr[q]=c;
	}
	for(int q=0;q<t;q++)
	{
		if(arr[q] > -1)
		cout<<arr[q]<<"\n";
		else
		cout<<"Too chaotic";
	}
	return 0;
}
