#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    float c1,c2,c3;
    c1=c2=c3=0;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    if(arr[arr_i]>0)
       c1++;
       else if(arr[arr_i]<0)
       c2++;
       else
       c3++;
    }
    float f1=c1/n;
    cout<<f1<<"\n";
    float f2=c2/n;;
    cout<<f2<<"\n";
    float f3=c3/n;
    cout<<f3<<"\n";
    return 0;
}
