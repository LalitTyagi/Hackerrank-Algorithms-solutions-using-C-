#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	char arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int sea=0;
	int count=0;
	
	for(int i=0;i<n;i++){
        if(arr[i]=='D') { 
        	sea--;
            if(!sea) 
				continue;
         }
        else if(arr[i]=='U') 
        	sea++; 
       
        if(!sea) 
			count++;
    }
    
    cout<<count;
    
    return 0;
}
