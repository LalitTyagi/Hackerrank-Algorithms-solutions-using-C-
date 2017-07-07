#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	unsigned long long int arr[5],min,max;
	for(int i=0;i<5;i++)
		cin>>arr[i];
	
	sort(arr+0,arr+5);
	
	
	min=0;
	for(int i=0;i<4;i++)
		min=min+arr[i];
	
	max=0;
	max=(min+arr[4])-arr[0];
	
	cout<<min<<" "<<max;
	return 0;
}
