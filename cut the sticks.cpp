#include<iostream>
using namespace std;
int smallest(int *k,int n)
{
	int sm;
	for(int i=0;i<n;i++)
	if(k[i])
		{
		sm=k[i];
		break;
		}
	for(int i=0;i<n;i++)
	if(k[i]<sm&&k[i]>0)
	sm=k[i];
	return sm;
}
int main()
{
	int n,count=0,flag=1;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];

	while(flag)
	{	int sm=smallest(arr,n);
		flag=count=0;
		for(int j=0;j<n;j++)
		if(arr[j]>0)
		{
			count++;
			flag|=arr[j];
			arr[j]-=sm;
		}if(flag)
		cout<<count<<"\n";
	}
}
