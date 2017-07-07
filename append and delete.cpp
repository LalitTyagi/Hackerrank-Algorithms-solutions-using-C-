#include<iostream>
using namespace std;

int main()
{
	string s;
    cin >> s;
    int n=s.length();
    
    string t;
    cin >> t;
    int m=t.length();
    
    int k;
    cin >> k;
    
    if(n<m)
    {
    	if(k==m-n)
    	cout<<"Yes";
    	else
    	cout<<"No";
    }
    else
    {
    	int a,b,c;
    	a=0;
    	if(n>m)
    	{
    		for(int i=0;i<m;i++)
	    	{
	    		if(s[i]!=t[i])
	    		{
	    			a=1;
	    			break;
	    		}
	    	}
	    	if(a=1)
	    	{
	    		b=n-i-1;
	    		c=m-i-1;
	    		if(k>=b+c)
	    			cout<<"Yes";
    			else
   					cout<<"No";
	    	}
	    	else
	    	{
	    		
	    	}
    	}
    	else
    	{
    		if(k>=n+n)
    			cout<<"Yes";
    		else
    			cout<<"No";
    	}
    }   
    
    return 0;
}
