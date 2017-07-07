#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//0th and 15th test case error
 
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int arr[26]={0},a,b=0,c=0;
	for(int i=0;i<n;i++)
	{	
		arr[s[i]-'a']++;
	}
	
	for(int i=0;i<26;i++)
	{	
		cout<<arr[i]<<" ";
	}
	
	sort(arr+0,arr+26);
	
	
	for(int i=1;i<26;i++)
	{	
		if(arr[i-1]!=arr[i])
		{
			b++;
			i++;
		}
		if(b==3)
		{
			c=1;
			break;
		}
		
	}
	
	if(c==0)
	cout<<"YES";
	else
	cout<<"NO";
	
	
 	
	return 0;
}
