#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long int s,t,a,b,m,n,a1,b1,k,j=0,l=0;
    cin >>s>>t>>a>>b>>m>>n;
    for(int i=0;i<m;i++)
    {
    	k=0;
    	cin>>a1;
    	k=a+a1;
    	if(k>=s && k<=t)
    	j++;
    }
    for(int i=0;i<n;i++)
    {
    	k=0;
    	cin>>b1;
    	k=b+b1;
    	if(k>=s && k<=t)
    	l++;
    }
    cout<<j<<"\n";
    cout<<l;
    return 0;
}
