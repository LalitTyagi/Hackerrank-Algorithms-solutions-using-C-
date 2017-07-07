#include<iostream>
using namespace std;

int main(){
    int n,m,l;
    int count=0;
    cin >> n >> m;
    int a[n];
    for(int i = 0;i < n;i++){
       cin >> a[i];
    }
    for(int j = 0;j< n;j++)
    {
    	for(int k=j+1;k<n;k++)
    	{
    		l=a[j]+a[k];
    		if((l%m)==0)
    		count++;
    	}	
    }
    cout<<count;
    return 0;
}
