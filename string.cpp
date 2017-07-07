#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string a,b,c;
	cin>>a>>b;
	int len1=a.size();
	int len2=b.size();
	c=a+b;
	cout<<len1<<" "<<len2<<"\n";
	cout<<c<<"\n";
    cout<<b[0];
	for(int i=1;i<len1;i++)
	cout<<a[i];
    cout<<" "<<a[0];
	for(int j=1;j<len2;j++)
	cout<<b[j];
}
