#include<iostream>
using namespace std;

int main()
{
	string s,t;
    cin >> s;
    cin >> t;
    
    int n=s.length();
    int m=t.length();
    
    int k,nm;
    cin >> k;
    
    if(n<m)
    	nm=n;
    else
    	nm=m;
    
    int len=0;
    for(int i=0,j=0;j<nm;i++)
    {
    	if(s[i]==t[i])
    		len++;
    	else
    		break;
	}
	
	if((n+m-(2*len))>k)
	cout<<"No";
	else if( (n+m-2*len)%2 == k%2)
	cout<<"Yes";
	else if((n+m)-k<0)
	cout<<"Yes";
	else
	cout<<"No";
    
    return 0;
}
