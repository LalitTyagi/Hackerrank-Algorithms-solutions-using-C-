/*

You will be given a message in English with no spaces between the words. The maximum message 
length can be characters. Print the encoded message.

*/

#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    string s;
    //cout << "Please enter a string: ";
    getline(cin, s);
    s.erase( remove( s.begin(), s.end(), ' ' ), s.end() );
    //cout<<s;
    int n;
    n=0;
    for(int i=0;s[i];i++)
    {
    	n++;
    	if(s[i]==' ')
    	break;
    }
   // cout<<"\n"<<n<<"\n";
    int a,b;
    a=floor(sqrt(n));
    b=ceil(sqrt(n));
    if(a!=b)
    a++;
   // cout<<a<<" "<<b<<"\n";
    
    for(int i=0;i<a;i++)
    {
    	for(int j=i;j<n;)
    	{
    		cout<<s[j];
    		j+=b;
    	}cout<<" ";
    	
    }
    
    return 0;
}
