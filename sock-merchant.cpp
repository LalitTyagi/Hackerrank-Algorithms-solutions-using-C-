#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a,b,c=0;
	cin>>a;
	int arr[a];
	for(b=0;b<a;b++)
	cin>>arr[b];
	
	sort(arr+0,arr+a);
	
	//for(b=0;b<a;b++)
	//cout<<arr[b]<<" ";
	
	for(int i=0;i<a-1;)
	{
		if(arr[i]==arr[i+1])
		{
			i=i+2;
			c++;
		}
		else
		{
			i++;
		}
	}
	
	cout<<c;
	
	return 0;
}
