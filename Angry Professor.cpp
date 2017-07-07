#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i= 0; i< t; i++){
        int n;
        int k;
        int count=0;
        cin >> n >> k;
        int a[n];
        for(int j=0;j<n;j++){
           cin >> a[j];
           if((a[j]<0)||(a[j]==0))
           count++;
        }
        if(count>=k)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";  
    }
    return 0;
}
