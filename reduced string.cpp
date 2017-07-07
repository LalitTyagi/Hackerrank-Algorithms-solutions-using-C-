#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	string a;
	cin>>a;
	n=a.length();
	for(int i=0;i<n;)
	{
		if(a[i]==a[i+1])
		{
			a.erase(i,2);
			i=0;
		}
		else
		{
			i++;
		}
	}
	
	if(a.empty())
		cout<<"Empty String"<<"\n";
	else
		cout<<a<<"\n";
	
	return 0;
}
