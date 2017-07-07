#include<iostream>
using namespace std;

int main()
{
	int t;
    cin >> t;
    long arr[t];
    for(int i= 0;i<t;i++)
	{
        long b;
        long w;
        cin >> b >> w;
        long x;
        long y;
        long z;
        long a;
        cin >> x >> y >> z;
        
        if(x>y)
        {
        	if(x>y+z)
        	x=y+z;	
        }
        else if(y>x)
        {
        	if(y>x+z)
        	y=x+z;       	
        }
        
		a=(b*x)+(w*y);
		arr[i]=a;
	}
	
	for(int i= 0;i<t;i++)
	{
		cout<<arr[i];
		cout<<"\n";
	}
	
		return 0;
}
