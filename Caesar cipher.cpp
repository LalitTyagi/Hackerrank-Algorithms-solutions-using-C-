#include<iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){
    int n,m,k,a;
    string s;
    cin>>n>>s>>k;
    if(k>26)
    	k=k%26;
    for(int i=0;i<n;i++)
    {
    	if(((int)s[i])>=97 && ((int)s[i])<=122 )
    	{
    		if(s[i]+k>122)
            {
                s[i]=s[i]+k;
                a=s[i]-122;
                s[i]=a+96;
        	}
            else
                s[i]=s[i]+k;
    	
    	}
    	else if(((int)s[i])>=65 && ((int)s[i])<=90)
    	{
    		if(s[i]+k>90)
            {
                s[i]=s[i]+k;
                a=s[i]-90;
                s[i]=a+64;
            }
            else
                s[i]=s[i]+k;
    	}	
    }
    
    cout<<s;
    re/turn 0;
}
