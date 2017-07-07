/*



A modified Kaprekar number is a positive whole number n with d digits, 
such that when we split its square into two pieces - a right hand piece r 
with d digits and a left hand piece l that contains the remaining d or d-1  digits, 
the sum of the pieces is equal to the original number (i.e. l+r =n ). 

45*45=2045
20+45=45


i/p:
1
99999

o/p
1 9 45 55 99 297 703 999 2223 2728 4950 5050 7272 7777 9999 17344 22222 77778 82656 95121 99999

apna o/p 22222 tak hi aa raha hei;
*/



#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long a,b;
	cin>>a>>b;
	long long int c,d,e,f,g,h,j,i=0;
	j=0;
	long arr[1000];
	for(i=a;i<=b;i++)
	{
		c=0;
		f=g=0;
		d=i;
		while(d!=0)
		{
			d=d/10;
			c++;
		}
		e=pow(10,c);
		f=i*i;
		//cout<<f<<" ";
		g=f/e;
		//cout<<g<<" ";
		h=f%e;
		//cout<<h<<"\n";
		if(i==(g+h))
		{
			arr[j]=i;
			j++;
		}
		
	}
	if(j==0)
	cout<<"INVALID RANGE";
	else
	for(int i=0;i<j;i++)
	cout<<arr[i]<<" ";
	
	return 0;
}
