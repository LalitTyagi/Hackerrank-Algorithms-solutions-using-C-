/*

Factorials of N>20 can't be stored even in a 64-bit long long variable. 
Big integers must be used for such calculations. 
Languages like Java, Python, Ruby etc. can handle big integers, 
but we need to write additional code in C/C++ to handle huge values. 


We will do like any 8 year old kid do who's good with numbers

*/
#include<iostream>
using namespace std;

int main()
    {
	    int n,j,temp;
	    int arr[200];
	    arr[0]=1;
	    j=0;//for index of array arr
	    //cout<<"Enter the number.:";
	    cin>>n;
	    for(;n>=2;n--)
	    {
		    temp=0;
		    for(int i=0;i<=j;i++)
		    {
			    temp=(arr[i]*n)+temp;
			    arr[i]=temp%10;
			    temp=temp/10;
		    }
		    while(temp>0)//for 
		    {
			    arr[++j]=temp%10;
			    temp=temp/10;
		    }
	    }
	    for(int i=j;i>=0;i--)
	    printf("%d",arr[i]);
    return 0;
    }
