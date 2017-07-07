#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int a,b,c,d,e,f,g,h,i=0;
	cin>>a>>b>>c;
	for(f=a;f<=b;f++)
	{
		g=f;
		e=0;
		while(g!=0)
	    {
	    	d=g%10;
	    	e=e*10+d;
	    	g=g/10;
	    }
    	if(f>e)
    	h=(f-e)%c;
    	else
    	h=(e-f)%c;
    	
    	if(h==0)
    	i++;	
	}
    cout<<i;
    
    return 0;
}
