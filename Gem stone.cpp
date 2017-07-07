#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int n,m,l=0,a,b;
	cin>>n;
	string arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	sort(arr[0].begin(), arr[0].end());
    arr[0].erase(unique(arr[0].begin(), arr[0].end()), arr[0].end());
    
    
    m=arr[0].length();
    
    for(int i=0;i<m;i++)
    {
    	b=0;
    	for(int j=1;j<n;j++)
    	{
    		for(int k=0;arr[j][k]!=NULL;k++)
    		{
    			a=0;
    			if(arr[0][i]==arr[j][k])
    			{
    				a=1;
    				break;
    			}
    		}
    		if(a!=1)
    		break;
    		else
    		b++;
    	}
    	if(b==n-1)
    	l++;
    }
    
    
    cout<<l;

	return 0;
}





