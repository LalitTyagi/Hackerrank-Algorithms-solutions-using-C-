#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string s;
	cin>>s;
	long long int a,b=0,c=0,j,l,F[26]={0};
	l=s.length();
	for(j=0;j<s.length();j++)
			{
				a=(int)s[j];
				a=a-97;
				F[a]++;
			}
	if(l%2==1)
	{
		for(j=0;j<s.length();j++)
			{
				if(F[j]%2==1)
				{
					c++;
					if(c==2)
					{
						b=1;
						break;
					}
					
				}
			}
	}
	else
	{
		for(j=0;j<s.length();j++)
			{
				if(F[j]%2==1)
				{
					b=1;
					break;
				}
			}
		
	}
	
	if(b==1)
	cout<<"NO";
	else
	cout<<"YES";
	
	return 0;
}



/*

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    int a[26]={0};
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        (a[s[i]-'a'])++;
    }
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]%2)
            c++;
    }
    if(c>1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}



*/
