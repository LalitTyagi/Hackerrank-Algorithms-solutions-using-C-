#include<iostream>
#include<string>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
	{
        string s;
        cin>>s;
        int b=0;
        long long int j,a[26]={0};
        for(j=0;j<s.length();j++)
        {
        	a[s[j]-'a']++;
        }
        for(j=0;j<k);j++)
        {
        	if(a[j]!=0)
        		b++;
        }
        arr[i]=b;
    }
    
    for(int i=0;i<n;i++)
        {
        	cout<<arr[i]<<"\n";
        }
        
    return 0;
}
