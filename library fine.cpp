#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    int a;
    
    if(y1==y2)
    {
    	if(m1==m2)
    	{
    		if(d1>d2)
    		a=(d1-d2)*15;
    		else
    		a=0;
    	}
    	
    	else if(m1>m2)
    	a=(m1-m2)*500;  
		
		else 
		a=0;  	
    }
    else if(y1>y2)
    a=(y1-y2)*10000;
    
    else 
    a=0;
    
    cout<<a;
    
    return 0;
}
