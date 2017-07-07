#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a,b=1,c=0,max;
	cin>>a;
	int arr[a],arr1[a];
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	sort(arr+0,arr+a);
	for(int i=0;i<=a-1;i++)
	{
		if(i==a-1)
		{
			arr1[c]=b;
			c++;	
		}
		else if(arr[i]==arr[i+1])
		{
			b++;
		}
		else
		{
			arr1[c]=b;
			b=1;
			c++;
		}
		
	}
	
	max=arr1[0];
	for(int i=1;i<c;i++)
	{
		if(max<arr1[i])
		max=arr1[i];
	}
	max=a-max;
	
	cout<<max;
	
	
	return 0;
}
