#include<iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int c=0;
    int n=S.length();
    for(int i=0;i<n;)
        {
            if(S[i]!='S')
			c++;
			  
			if(S[i+1]!='O')
			c++;
			   
			if(S[i+2]!='S')
			c++;
			
			i+=3;
			 
        }
    cout<<c;
    return 0;
}
